#include <bits/stdc++.h>

using namespace std;

struct Formiga {
    int tamanhoCaminho;
    vector<int> caminho;
    vector<bool> visitado;

    Formiga(int tamanhoTour) : tamanhoCaminho(tamanhoTour), caminho(tamanhoTour), visitado(tamanhoTour, false) {}

    void visitarCidade(int indiceAtual, int cidade) {
        caminho[indiceAtual + 1] = cidade;
        visitado[cidade] = true;
    }

    bool visitou(int i) const {
        return visitado[i];
    }

    double comprimentoCaminho(const vector<vector<double>>& grafo) const {
        double comprimento = grafo[caminho[tamanhoCaminho - 1]][caminho[0]];
        for (int i = 0; i < tamanhoCaminho - 1; i++) {
            comprimento += grafo[caminho[i]][caminho[i + 1]];
        }
        return comprimento;
    }

    void limpar() {
        fill(visitado.begin(), visitado.end(), false);
    }
};

struct OtimizacaoColoniaFormigas {
    double c = 1.0;
    double alfa = 1;
    double beta = 5;
    double evaporacao = 0.5;
    double Q = 500;
    double fatorFormiga = 0.8;
    double fatorAleatorio = 0.01;

    int maxIteracoes = 1000;

    int numeroCidades;
    int numeroFormigas;
    vector<vector<double>> grafo;
    vector<vector<double>> trilhas;
    vector<Formiga> formigas;
    vector<double> probabilidades;

    int indiceAtual;

    vector<int> melhorOrdemTour;
    double melhorComprimentoTour;

    OtimizacaoColoniaFormigas(int numCidades) : numeroCidades(numCidades), grafo(ler_grafo_arquivo(numCidades)),
                                                numeroFormigas(static_cast<int>(numeroCidades * fatorFormiga)),
                                                trilhas(numCidades, vector<double>(numCidades)),
                                                formigas(numeroFormigas, Formiga(numCidades)), probabilidades(numCidades) {}

    vector<vector<double>> ler_grafo_arquivo(int n) {
        vector<vector<double>> matrizAleatoria(n, vector<double>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrizAleatoria[i][j];
            }
        }
        return matrizAleatoria;
    }

    void iniciarOtimizacaoColoniaFormigas() {
        for (int i = 1; i <= 3; i++) {
            cout << "Tentativa #" << i << endl;
            resolver();
        }
    }

    vector<int> resolver() {
        prepararFormigas();
        limparTrilhas();
        for (int i = 0; i < maxIteracoes; i++) {
            moverFormigas();
            atualizarTrilhas();
            atualizarMelhor();
        }
        cout << "Melhor comprimento do tour: " << (melhorComprimentoTour - numeroCidades) << endl;
        cout << "Melhor ordem do tour: ";
        for (int cidade : melhorOrdemTour) {
            cout << cidade << " ";
        }
        cout << endl;
        return melhorOrdemTour;
    }

    void prepararFormigas() {
        indiceAtual = 0;
        for (Formiga& formiga : formigas) {
            formiga.limpar();
            formiga.visitarCidade(-1, rand() % numeroCidades);
        }
    }

    void moverFormigas() {
        for (int i = indiceAtual; i < numeroCidades - 1; i++) {
            for (Formiga& formiga : formigas) {
                formiga.visitarCidade(indiceAtual, selecionarProximaCidade(formiga));
            }
            indiceAtual++;
        }
    }

    int selecionarProximaCidade(const Formiga& formiga) {
        int t = rand() % (numeroCidades - indiceAtual);
        if (static_cast<double>(rand()) / RAND_MAX < fatorAleatorio) {
            auto indiceCidade = find_if(probabilidades.begin(), probabilidades.end(),
                                             [&](double prob) { return prob > 0.0; });
            return distance(probabilidades.begin(), indiceCidade);
        }
        calcularProbabilidades(formiga);
        double r = static_cast<double>(rand()) / RAND_MAX;
        double total = 0.0;
        for (int i = 0; i < numeroCidades; i++) {
            total += probabilidades[i];
            if (total >= r) {
                return i;
            }
        }

        throw runtime_error("Não existem outras cidades");
    }

    void calcularProbabilidades(const Formiga& formiga) {
        int i = formiga.caminho[indiceAtual];
        double feromonio = 0.0;
        for (int l = 0; l < numeroCidades; l++) {
            if (!formiga.visitou(l)) {
                feromonio += pow(trilhas[i][l], alfa) * pow(1.0 / grafo[i][l], beta);
            }
        }
        for (int j = 0; j < numeroCidades; j++) {
            if (formiga.visitou(j)) {
                probabilidades[j] = 0.0;
            } else {
                double numerador = pow(trilhas[i][j], alfa) * pow(1.0 / grafo[i][j], beta);
                probabilidades[j] = numerador / feromonio;
            }
        }
    }

    void atualizarTrilhas() {
        for (int i = 0; i < numeroCidades; i++) {
            for (int j = 0; j < numeroCidades; j++) {
                trilhas[i][j] *= evaporacao;
            }
        }
        for (const Formiga& formiga : formigas) {
            double contribuicao = Q / formiga.comprimentoCaminho(grafo);
            for (int i = 0; i < numeroCidades - 1; i++) {
                trilhas[formiga.caminho[i]][formiga.caminho[i + 1]] += contribuicao;
            }
            trilhas[formiga.caminho[numeroCidades - 1]][formiga.caminho[0]] += contribuicao;
        }
    }

    void atualizarMelhor() {
        if (melhorOrdemTour.empty()) {
            melhorOrdemTour = formigas[0].caminho;
            melhorComprimentoTour = formigas[0].comprimentoCaminho(grafo);
        }
        for (const Formiga& formiga : formigas) {
            if (formiga.comprimentoCaminho(grafo) < melhorComprimentoTour) {
                melhorComprimentoTour = formiga.comprimentoCaminho(grafo);
                melhorOrdemTour = formiga.caminho;
            }
        }
    }

    void limparTrilhas() {
        for (int i = 0; i < numeroCidades; i++) {
            fill(trilhas[i].begin(), trilhas[i].end(), c);
        }
    }
};

int main() {
    srand(static_cast<unsigned>(time(0)));
    
    int numeroCidades;
    cin >> numeroCidades;
    
    OtimizacaoColoniaFormigas ocf(numeroCidades);
    ocf.iniciarOtimizacaoColoniaFormigas();

    return 0;
}

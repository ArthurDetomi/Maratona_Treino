#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define MAXV 100

struct piloto {
    int id, pontos, colocacoes[MAXV];
};

int ordem(piloto a, piloto b) {
    if (a.pontos != b.pontos) {
        return a.pontos > b.pontos;
    }
    return a.id < b.id;
}

int main(void) {
    unsigned corr_qtd, pil_qtd;

    cin >> corr_qtd >> pil_qtd;

    while (true) {

        if (corr_qtd == 0 && pil_qtd == 0) {
            break;
        }

        // iniciei um vetor com todos os pilotos possíveis
        vector<piloto> pilotos(pil_qtd);

        for (int i = 0; i < corr_qtd; i++) {
            for (int j = 0; j < pil_qtd; j++) {
                cin >> pilotos[j].colocacoes[i];
                pilotos[j].id = j + 1;
                pilotos[j].pontos = 0;
            }
        }

        int s;
        cin >> s;


        while (s--) {
            int k;
            cin >> k;

            int x;
            for (int j = 0; j < k; j++) {
                cin >> x;
                for (int l = 0; l < pil_qtd; l++) {
                    for (int m = 0; m < corr_qtd; m++) {
                        if (pilotos[l].colocacoes[m] == j + 1) {
                            pilotos[l].pontos += x;
                        }
                    }
                }
            }

            sort(pilotos.begin(), pilotos.end(), ordem);
            int ponto = pilotos[0].pontos;
            for (int q = 0; q < pil_qtd; q++) {
                if (pilotos[q].pontos == ponto) {
                    cout << pilotos[q].id << " ";
                }
                pilotos[q].pontos = 0;
            }
            cout << endl;
        }
        cin >> corr_qtd >> pil_qtd;
    }
    return 0;
}

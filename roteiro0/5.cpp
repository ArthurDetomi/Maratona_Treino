#include <iostream>

using namespace std;

int main() {
    string ganhadores[1000];
    int rodada[1000];
    int cont = 0;
    int pos = 0;

    while (1) {
        int qtd_r;
        string nomeA, nomeB;
        int valor1, valor2;

        cin >> qtd_r;
        if (qtd_r == 0)
            break;

        rodada[cont] = qtd_r;

        cin >> nomeA;
        cin >> nomeB;
        for (int i = 0; i < qtd_r; i++) {
            cin >> valor1 >> valor2;
            if ((valor1 + valor2) % 2 == 0) {
                ganhadores[pos] = nomeA;
            } else {
                ganhadores[pos] = nomeB;
            }
            pos++;
        }
        cont++;
    }

    int pos_aux = 0;
    for (int i = 0; i < cont; i++) {
        cout << "Teste " << i + 1 << endl;
        for (int j = 0; j < rodada[i]; j++) {
            cout << ganhadores[pos_aux] << endl;
            pos_aux++;
        }
        cout << endl;
    }

    return 0;
}
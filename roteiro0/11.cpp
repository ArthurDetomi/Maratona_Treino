#include <iostream>

using namespace std;

int main(void) {
    int n;

    int nums_ganhadores[110];
    int achou[110];

    int pos = 0;
    while (cin >> n) {
        int valor = 0;
        achou[pos] = 0;

        if (n == 1) {
            cin >> valor;
            nums_ganhadores[pos] = valor;
            achou[pos] = 1;
            pos++;
        } else if (n != 0) {
            int soma = 0;
            for (int i = 0; i < n; i++) {
                cin >> valor;
                if (soma == valor && achou[pos] == 0) {
                    achou[pos] = 1;
                    nums_ganhadores[pos] = valor;
                }
                soma += valor;
            }
            pos++;
        }
    }

    for (int i = 0; i < pos; i++) {
        if (achou[i] != 0) {
            cout << "Instancia " << i + 1 << endl;
            cout << nums_ganhadores[i] << endl << endl;
        } else {
            cout << "Instancia " << i + 1 << endl;
            cout << "nao achei" << endl << endl;
        }
    }
    return 0;
}
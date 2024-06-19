#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int N, num_teste = 1;

int main() {
    while (1) {
        cin >> N;

        if (N == 0)
            break;

        int num_ingresso, pos_fila = 1;

        while (N--) {
            cin >> num_ingresso;

            if (pos_fila == num_ingresso) {
                cout << "Teste " << num_teste << endl;
                cout << num_ingresso << endl << endl;
            }

            pos_fila++;
        }

        num_teste++;
    }

    return 0;
}
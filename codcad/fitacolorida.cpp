#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

int main(void) {
    int n;
    cin >> n;
    vector<int> fita(n);
    vector<int> posicoes0(n);

    int qtd = 0;
    for (int i = 0; i < n; i++) {
        cin >> fita[i];
        if (fita[i] == 0) {
            posicoes0[qtd] = i;
            qtd++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (fita[i] == -1) {
            int menor = n + 1;
            for (int j = 0; j < qtd; j++) {
                int dist;
                if (posicoes0[j] >= i) {
                    dist = posicoes0[j] - i;
                } else {
                    dist = i - posicoes0[j];
                }
                if (dist < menor) {
                    menor = dist;
                }
            }

            cout << min(9, menor) << " ";
        } else {
            cout << fita[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
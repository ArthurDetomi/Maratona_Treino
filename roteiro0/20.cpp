#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define MAXN_M 101

vector<int> somas_colunas(MAXN_M, 0);

int main(void) {
    int n, m;
    cin >> n >> m;

    int qtd;
    int maior = 0;
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < m; j++) {
            cin >> qtd;
            somas_colunas[j] += qtd;
            soma += qtd;
        }
        if (soma >  maior) {
            maior = soma;
        }
    }

    for (int i = 0; i < m; i++) {
        if (somas_colunas[i] > maior) {
            maior = somas_colunas[i];
        }
    }

    cout << maior << endl;
}
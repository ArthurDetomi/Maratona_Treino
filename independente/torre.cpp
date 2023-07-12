#include <bits/stdc++.h>
using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

int main(void) {
    int n;
    cin >> n;

    int mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> soma_colunas(n, 0);
    vector<int> soma_linhas(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma_colunas[j] += mat[i][j];
            soma_linhas[i] += mat[i][j];
        }
    }

    int maior = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int result = soma_colunas[j] + soma_linhas[i] - (mat[i][j] * 2);
            if (result > maior) {
                maior = result;
            }
        }
    }

    printf("%d\n", maior);

    return 0;
}
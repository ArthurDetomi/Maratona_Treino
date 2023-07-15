#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define MAXV 9

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        vector<vector<int>> mat(MAXV, vector<int>(MAXV, 0));

        for (int i = 0; i < MAXV; i += 2) {
            for (int j = 0; j < i + 1; j += 2) {
                cin >> mat[i][j];
            }
        }

        // completar a ultima linha da piramide
        int ultima_linha = MAXV - 1;
        for (int j = 1; j <= 7; j += 2) {
            mat[ultima_linha][j] = (mat[ultima_linha - 2][j - 1] - mat[ultima_linha][j - 1] - mat[ultima_linha][j + 1]) / 2;
        }


        // preencher o resto
        for (int i = ultima_linha - 1; i >= 0; i--) {
            for (int j = 0; j < i + 1; j++) {
                mat[i][j] = mat[i + 1][j] + mat[i + 1][j + 1];
            }
        }

        // exibe a matriz
        for (int i = 0; i < MAXV; i++) {
            for (int j = 0; j < i + 1; j++) {
                printf("%d%c", mat[i][j], " \n"[j==i]);
            }
        }
    }
    return 0;
}

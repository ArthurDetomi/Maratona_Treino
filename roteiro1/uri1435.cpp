#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;

    while (1) {
        cin >> n;

        if (n == 0) break;

        // iniciando uma matriz com vector
        vector<vector<int>> mat(n, vector<int> (n, 1));

        int tam = n - 1;
        int cont = 1;
        while (tam - 2 >= 0) {
            for (int i = cont; i < tam; i++) {
                for (int j = cont; j < tam; j++) {
                    mat[i][j]++;
                }
            }
            tam--;
            cont++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j != n - 1) {
                    printf("%3d ", mat[i][j]);
                } else {
                    printf("%3d", mat[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define QTD_DIAGO 2

int main(void) {
    int n;
    cin >> n;
    int mat[n][n];

    vector<int> soma_colunas(n , 0);
    vector<int> soma_diagonais(QTD_DIAGO, 0); 
    vector<int> soma_linhas(n, 0);

    int pos_aux = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            // somando colunas
            soma_colunas[j] += mat[i][j];
            // somando linhas
            soma_linhas[i] += mat[i][j];
            if (i == j) {
                // somando diagonais
                soma_diagonais[0] += mat[i][j];
            }
            if (j == pos_aux) {
                // somando diagonais
                soma_diagonais[1] += mat[i][j];
            }
        }
        pos_aux--;
    }

    int num_magico = soma_linhas[0];
    bool ehmagico = true;
    for (int i = 0; i < n; i++) {
        if (soma_colunas[i] != num_magico) {
            ehmagico = false;
            break;
        }
        if (soma_linhas[i] != num_magico) {
            ehmagico = false;
            break;
        }
        if (i < QTD_DIAGO) {
            if (soma_diagonais[i] != num_magico) {
                ehmagico = false;
                break;
            }
        }
    }
    if (ehmagico) {
        cout << num_magico << endl;
    } else {
        cout << -1 << endl;
    }

}
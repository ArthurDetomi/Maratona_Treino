#include <bits/stdc++.h>

using namespace std;

#define MAXN 9

int N;
string mat[MAXN];

bool eh_valido(int linha, int coluna, char value) {
    for (int i = 0; i < N; i++) {
        if (mat[linha][i] == value || mat[i][coluna] == value) {
            return false;
        }
    }

    if (N == 9) {
        int subgridStartRow = (linha / 3) * 3;
        int subgridStartCol = (coluna / 3) * 3;

        for (int i = subgridStartRow; i < subgridStartRow + 3; i++) {
            for (int j = subgridStartCol; j < subgridStartCol + 3; j++) {
                if (mat[i][j] == value) {
                    return false;
                }
            }
        }
    } else if (N == 4) {
        int subgridStartRow = (linha / 2) * 2;
        int subgridStartCol = (coluna / 2) * 2;

        for (int i = subgridStartRow; i < subgridStartRow + 2; i++) {
            for (int j = subgridStartCol; j < subgridStartCol + 2; j++) {
                if (mat[i][j] == value) {
                    return false;
                }
            }
        }
    }

    return true;
}

bool solve(int linha, int coluna) {
    if (linha == N) {
        return true;
    }
    if (coluna == N) {
        return solve(linha + 1, 0);
    }
    if (mat[linha][coluna] != '.') {
        return solve(linha, coluna + 1);
    }
    for (char c = '1'; c <= '9'; c++) {
        if (eh_valido(linha, coluna, c)) {
            mat[linha][coluna] = c;
            if (solve(linha, coluna + 1)) {
                return true;
            }
            mat[linha][coluna] = '.';
        }
    }
    return false;
}

int main(void) {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> mat[i];
    }

    solve(0, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3c", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

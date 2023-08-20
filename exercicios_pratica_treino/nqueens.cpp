#include <bits/stdc++.h>

using namespace std;

#define MAXN 9

char mat[MAXN][MAXN];

int N;

bool is_valid(int l, int c) {
    char queen = 'Q';

    // mesma linha
    for (int i = 0; i < N; i++)
        if (mat[l][i] == queen)
            return false;

    // mesma coluna
    for (int i = 0; i < N; i++)
        if (mat[i][c] == queen)
            return false;

    // diagonal para cima
    for (int i = l, j = c; i >= 0 && j >= 0; i--, j--)
        if (mat[i][j] == queen)
            return false;

    // diagonal para baixo
    for (int i = l, j = c; i < N && j >= 0; i++, j--)
        if (mat[i][j] == queen)
            return false;

    // diagonal para cima (outra direção)
    for (int i = l, j = c; i >= 0 && j < N; i--, j++)
        if (mat[i][j] == queen)
            return false;

    // diagonal para baixo (outra direção)
    for (int i = l, j = c; i < N && j < N; i++, j++)
        if (mat[i][j] == queen)
            return false;

    return true;
}

bool solveQueens(int c) {
    // Todas as colunas validas foram preenchidas com rainhas
    if (c == N) {
        return true;
    }
    for (int l = 0; l < N; l++) {
        if (is_valid(l, c)) {
            mat[l][c] = 'Q';
            if (solveQueens(c + 1)) {
                return true;
            }
            mat[l][c] = '.';
        }
    }
    return false;
}

int main(void) {
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = '.';
        }
    }

    solveQueens(0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
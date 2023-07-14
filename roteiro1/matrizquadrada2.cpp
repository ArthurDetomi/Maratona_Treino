#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define MAXN 100

vector<vector<int>> mat(MAXN, vector<int>(MAXN, 0));

void pre() {
    int aux = 1;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (i == j) {
                mat[i][j] = 1;
            } else {
                if (j == 0) {
                    mat[i][j] = mat[i - 1][j] + 1;
                } else if (j > i) {
                    mat[i][j] = mat[i][j - 1] + 1;
                } else if (j < i) {
                    mat[i][j] = mat[i - 1][j] + 1;
                }
            }
        }
        aux++;
    }
}

void exibe_matriz(unsigned n) {
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

int main() {
    pre();
    unsigned n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        exibe_matriz(n);
    }
}
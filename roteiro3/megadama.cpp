#include <bits/stdc++.h>

using namespace std;

#define MAXN 21

int N, M;

int mat[MAXN][MAXN];

struct pos {
    int l, c;
};

int main(void) {
    while (true) {
        scanf("%d %d", &N, &M);

        if (!(N | M)) {
            break;
        }

        vector<pos> minha;
        vector<pos> oponente;

        vector<int> values;

        int num;
        for (int i = 0; i < (N * M) / 2; i++) {
            scanf("%d", &num);
            values.push_back(num);
        }

        int cont = 0;

        int aux = 0;
        for (int i = N; i >= 0; i--) {
            aux = !aux;
            for (int j = aux; j < M; j += 2) {
                if (values[cont] == 1) {
                    mat[i][j] = 1;
                    minha.push_back({i, j});
                } else if (values[cont] == 2) {
                    mat[i][j] = 2;
                    oponente.push_back({i, j});
                } else {
                    mat[i][j] = -1;
                }
                cont++;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf("%3d ", mat[i][j]);
            }
            printf("\n");
        }

        break;
    }

    return 0;
}
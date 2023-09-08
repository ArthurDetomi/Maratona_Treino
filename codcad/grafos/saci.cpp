#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 1001

int mat[MAX][MAX], dist[MAX][MAX];
int p_possiveis_c[] = {-1, 1, 0, 0}, p_possiveis_l[] = {0, 0, 1, -1};

int n, m, ini_x, ini_y, fim_x, fim_y;

void bfs() {
    queue<pair<int, int>> fila;
    fila.push({ini_x, ini_y});
    
    dist[ini_x][ini_y] = 1;

    while (!fila.empty()) {
        int l = fila.front().f, c = fila.front().s;
        fila.pop();

        for (int i = 0; i < 4; i++) {
            int atual_l = l + p_possiveis_l[i];
            int atual_c = c + p_possiveis_c[i];

            if (atual_l < 0 or atual_c < 0 or atual_c >= m or atual_l >= n or
                mat[atual_l][atual_c] == 0) {
                continue;
            }

            if (dist[atual_l][atual_c] <= 0) {
                fila.push({atual_l, atual_c});
                dist[atual_l][atual_c] = dist[l][c] + 1;
            }
        }
    }
}

int main() {
    fastio;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];

            if (mat[i][j] == 2) {
                ini_x = i;
                ini_y = j;
            }
            if (mat[i][j] == 3) {
                fim_x = i;
                fim_y = j;
            }
        }
    }

    bfs();

    cout << dist[fim_x][fim_y] << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define MAX 1001

#define TERRA '#'

int m, n;

char mat[MAX][MAX];

bool eh_valido(int l, int c) {
    if (mat[l + 1][c] == TERRA && mat[l - 1][c] == TERRA &&
        mat[l][c + 1] == TERRA && mat[l][c - 1] == TERRA) {
        return false;
    }
    return true;
}
int main() {
    fastio;

    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int qtd = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == TERRA && eh_valido(i, j)) {
                qtd++;
            }
        }
    }

    cout << qtd << endl;

    return 0;
}
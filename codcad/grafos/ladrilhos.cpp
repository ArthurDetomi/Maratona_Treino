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

#define MAX 201

int h, l;

int mat[MAX][MAX];
bool vis[MAX][MAX];

int p_possiveis_c[] = {-1, 1, 0, 0}, p_possiveis_l[] = {0, 0, 1, -1};

bool eh_valido(int linha, int coluna) {
    if (linha < 0 || linha >= h || coluna >= l || coluna < 0) {
        return false;
    }
    return true;
}

int bfs(int valor, pair<int, int> posicao_inicial) {
    vector< pair<int, int> > componente;
    
    queue< pair<int, int> > fila;

    fila.push(posicao_inicial);
    componente.pb(posicao_inicial);
    
    vis[posicao_inicial.f][posicao_inicial.s] = true;

    while(!fila.empty()) {
        int linha = fila.front().first, coluna = fila.front().second;
        fila.pop();

        for (int i = 0; i < 4; i++) {
            int atual_l = linha + p_possiveis_l[i];
            int atual_c = coluna + p_possiveis_c[i];

            if (eh_valido(atual_l, atual_c) && !vis[atual_l][atual_c] && mat[atual_l][atual_c] == valor) {
                componente.pb({atual_l, atual_c});
                fila.push({atual_l, atual_c});

                vis[atual_l][atual_c] = true;
            }
        }
    }
    
    return (int) componente.size();
}

int main() {
    fastio;

    cin >> h >> l;

    // leitura
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            cin >> mat[i][j];
        }
    }
    
    int area_minima = INT_MAX;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            if (!vis[i][j]) {
                pair<int, int> posicao;
                posicao = mp(i, j);
                area_minima = min(area_minima, bfs(mat[i][j], posicao));
            }
        }
    }

    cout << area_minima << endl;

    return 0;
}
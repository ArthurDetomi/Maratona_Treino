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

#define MAX 101

#define INFINITO INT_MAX

int mat[MAX][MAX], distancia[MAX][MAX];

bool processado[MAX][MAX];

int p_possiveis_c[] = {-1, 1, 0, 0}, p_possiveis_l[] = {0, 0, 1, -1};

int n;

void preenche_distancia() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            distancia[i][j] = INFINITO;
}

bool eh_valido(int l, int c) {
    if (l < 0 || l >= n || c < 0 || c >= n) {
        return false;
    }
    return true;
}

void dijkstra(pair<int, int> pos_inicial) {
    preenche_distancia();

    distancia[pos_inicial.f][pos_inicial.s] = 0;

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                   greater<pair<int, pair<int, int>>>>
        fila;

    fila.push(mp(distancia[pos_inicial.f][pos_inicial.s], pos_inicial));

    while (true) {
        pair<int, int> davez = mp(-1, -1);

        while (!fila.empty()) {
            pair<int, int> atual = fila.top().s;
            fila.pop();

            if (!processado[atual.f][atual.s]) {
                davez = atual;
                break;
            }
        }

        // já processei todos os vértices
        if (davez.f == -1 && davez.s == -1) {
            break;
        }

        // marco o davez como processado
        processado[davez.f][davez.s] = true;

        int l = davez.f, c = davez.s;

        // encontrando os vizinhos do vértice davez
        for (int i = 0; i < 4; i++) {
            int atual_l = l + p_possiveis_l[i];
            int atual_c = c + p_possiveis_c[i];

            if (!eh_valido(atual_l, atual_c)) {
                continue;
            }
            
            int dist = mat[atual_l][atual_c];

            pair<int, int> atual = mp(atual_l, atual_c);

            if (distancia[l][c] + dist < distancia[atual_l][atual_c]) {
                distancia[atual_l][atual_c] = distancia[l][c] + dist;
                fila.push(mp(distancia[atual_l][atual_c], atual));
            }
        }
    }
}

int main() {
    fastio;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    dijkstra(pair<int, int>(0, 0));

    cout << distancia[n - 1][n - 1] << endl;

    return 0;
}
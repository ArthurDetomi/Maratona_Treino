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

#define MAXN 1001

#define MAXM 5001

vector<int> grafo[MAXN];

int n, m;

vector<int> pegar_todos_vertices_grafo() {
    vector<int> all_vertices;

    for (int i = 1; i <= n; i++) {
        all_vertices.pb(i);
    }

    return all_vertices;
}

vector<int> subtrair_conjuntos(vector<int> all_vertices,
                               set<int> componente_atual) {
    vector<int> novo_array;

    for (int vertice : all_vertices) {
        if (componente_atual.find(vertice) == componente_atual.end()) {
            novo_array.pb(vertice);
        }
    }

    return novo_array;
}

int bfs_qtd_componentes() {
    vector<int> all_vertices = pegar_todos_vertices_grafo();

    int qtd_componentes = 0;

    while (!all_vertices.empty()) {
        int vertice = all_vertices[0];

        queue<int> fila;

        fila.push(vertice);

        set<int> componente;

        componente.insert(vertice);

        while (!fila.empty()) {
            int vertice_atual = fila.front();
            fila.pop();

            for (int vizinho : grafo[vertice_atual]) {
                if (componente.find(vizinho) == componente.end()) {
                    componente.insert(vizinho);
                    fila.push(vizinho);
                }
            }
        }

        qtd_componentes++;

        all_vertices = subtrair_conjuntos(all_vertices, componente);
    }

    return qtd_componentes;
}

int main() {
    fastio;

    cin >> n >> m;

    int i, j;

    while (m--) {
        cin >> i >> j;

        grafo[i].pb(j);
        grafo[j].pb(i);
    }

    cout << bfs_qtd_componentes() << endl;

    return 0;
}
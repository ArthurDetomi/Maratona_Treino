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

#define pii pair<int, int>

#define MAXN 251

#define debug printf

vector<int> distancia(MAXN, INT_MAX);

int n, m, c, k;

bool esta_na_rota_servico(int vertice) { return vertice <= c - 1; }

bool eh_o_proximo_da_rota_servico(int vr_atual, int vr_proximo) { 
    return vr_proximo == vr_atual + 1;
};

void imprimir_grafo(const map<int, vector<pair<int, int>>> grafo);

void dijkstra(map<int, set<pair<int, int>>> &grafo) {
    distancia[k] = 0;
    
    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push(mp(0, k));
    
    while (!fila.empty()) {
        int vr_atual = fila.top().second;
        fila.pop();

        for (auto par : grafo[vr_atual]) {
            int vizinho = par.first;
            int peso_vizinho = par.second;

            if (esta_na_rota_servico(vr_atual) && !eh_o_proximo_da_rota_servico(vr_atual,vizinho)) {
                continue;
            }


            if (distancia[vizinho] > distancia[vr_atual] + peso_vizinho) {
                distancia[vizinho] = distancia[vr_atual] + peso_vizinho;
                fila.push(mp(distancia[vizinho], vizinho));
            }
        }
    }
}

int main() {
    fastio;

    while (true) {
        cin >> n >> m >> c >> k;

        if (n == 0 &&  m == 0 && c == 0 && k == 0) {
            break;
        }

        map<int, set<pair<int, int>>> grafo;

        int numero_estradas = m;

        int u, v, p;

        while (numero_estradas--) {
            cin >> u >> v >> p;

            grafo[u].insert(mp(v, p));
            grafo[v].insert(mp(u, p));
        }

        dijkstra(grafo);
        printf("%d\n", distancia[c - 1]);

        distancia = vector<int>(MAXN, INT_MAX);
    }

    return 0;
}

void imprimir_grafo(const map<int, set<pair<int, int>>> grafo) {
    for (auto m : grafo) {
        int vr_atual = m.first;

        set<pair<int, int>> set_atual = m.second;

        cout << "vertice_atual=" << vr_atual << " -> ";

        for (pii vr_vizinho : set_atual) {
            cout << vr_vizinho.first << " ";
        }

        cout << endl;
    }
}
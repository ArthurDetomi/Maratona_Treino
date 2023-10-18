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

#define MAXN 1001

map<int, vector< pii > > grafo; 

vector<int> distancia(MAXN, INT_MAX);

int n, m, inicio = 0, fim;

vector<bool> processado(MAXN, false);

void dijskstra() {
    distancia[inicio] = 0;
    priority_queue< pii, vector<pii>, greater<pii> > fila;
    fila.push(mp(distancia[inicio], inicio));

    while (true) {
        int davez = -1;

        while (!fila.empty()) {
            int atual = fila.top().second;
            fila.pop();

            if (!processado[atual]) {
                davez = atual;
                break;
            }
        }

        if (davez == -1) break;

        processado[davez] = true;

        for (int i = 0; i < (int) grafo[davez].size(); i++) {
            int dist = grafo[davez][i].second;
            int vizinho = grafo[davez][i].first;

            if (distancia[vizinho] > distancia[davez] + dist) {
                distancia[vizinho] = distancia[davez] + dist;
                fila.push(mp(distancia[vizinho], vizinho));
            }
        }
    }

}

int main() {
    fastio;

    cin >> n >> m;

    int vr, viz, peso; 
    
    while (m--) {
        cin >> vr >> viz >> peso;
        grafo[vr].pb(mp(viz, peso));
        grafo[viz].pb(mp(vr, peso));
    }

    fim = n + 1;

    dijskstra();

    cout << distancia[fim] << endl;

    return 0;
}
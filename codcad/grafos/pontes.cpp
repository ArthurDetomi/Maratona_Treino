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

vector<int> distancia(MAXN, INFINITO);

#define INFINITO INT_MAX

int n, m, inicio = 0, fim;

void dijskstra() {
    distancia[inicio] = 0;
    priority_queue< pii, vector<pii>, greater<pii> > fila;
    fila.push( mp(distancia[inicio], inicio));

    while (true) {
        int davez = -1;

        while (!fila.empty()) {
            
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
    }

    return 0;
}
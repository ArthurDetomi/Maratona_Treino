#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

#define pb push_back

#define MAXN 100002

int n, m;

vector<int> grafo[MAXN];

bool contem(int p, int v) {
    for (int i = 0; i < (int)grafo[p].size(); i++) {
        if (grafo[p][i] == v) {
            return true;
        }
    }
    return false;
}

int main() {
    fastio;

    cin >> n >> m;

    int t, a, b;

    while (m--) {
        cin >> t >> a >> b;

        if (t == 0) {
            cout << (contem(a, b) ? 1 : 0) << endl;
        } else {
            grafo[a].pb(b);
            grafo[b].pb(a);
        }
    }

    return 0;
}
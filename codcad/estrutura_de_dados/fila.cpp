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

#define MAX 50001

int n, m;

int main() {
    fastio;

    cin >> n;

    vector<int> fila_inicial;

    int value;

    for (int i = 0; i < n; i++) {
        cin >> value;

        fila_inicial.pb(value);
    }

    cin >> m;

    unordered_set<int> sairam;

    for (int i = 0; i < m; i++) {
        cin >> value;

        sairam.insert(value);
    }

    for (int i = 0; i < n; i++) {
        if (sairam.find(fila_inicial[i]) == sairam.end()) {
            if (i != n - 1) {
                cout << fila_inicial[i] << " ";
            } else {
                cout << fila_inicial[i];
            }
        }
    }

    cout << endl;

    return 0;
}
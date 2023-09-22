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

int t;

int main() {
    fastio;

    cin >> t;

    while (t--) {
        vector<int> precos;
        
        int n;

        cin >> n;

        int value;

        for (int i = 0; i < n; i++) {
            cin >> value;
            
            precos.pb(value);
        }

        int qtd = 0;

        int tam = precos.size();

        int menor = precos[tam - 1];

        for (int i = tam - 2; i >= 0; i--) {
            if (precos[i] > menor) {
                qtd++;
            } else if (precos[i] < menor) {
                menor = precos[i];
            }
        }

        cout << qtd << endl;
    }

    return 0;
}
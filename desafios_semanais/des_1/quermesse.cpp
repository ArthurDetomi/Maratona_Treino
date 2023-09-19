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

int n;

int main() {
    fastio;

    int cont = 1;

    while (true) {
        cin >> n;

        if (n == 0) break;

        int valor, ganhador = 0;

        for (int i = 1; i <= n; i++) {
            cin >> valor;

            if (valor == i) {
                ganhador = valor;
            }
        }

        cout << "Teste " << cont++ << endl;
        cout << ganhador << endl << endl;
    }

    return 0;
}
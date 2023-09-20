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

bool eh_par(int n) {
    return n % 2 == 0;
}

int main() {
    fastio;

    cin >> t;

    int a, b;

    while (t--) {
        cin >> a >> b;

        int resultado = abs(a - b);
        
        if (a > b) {
            // preciso subtrair
            if (eh_par(resultado)) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }

        } else if (b > a){
            // preciso somar
            if (!eh_par(resultado)) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
 
        } else {
            cout << 0 << endl;
        }

    }

    return 0;
}
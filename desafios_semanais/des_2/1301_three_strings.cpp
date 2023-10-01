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

bool eh_valido(char ai, char bi, char ci) {
    return (ai == bi && ci == ai) || (ai != bi && (ci == ai || ci == bi));
}

int main() {
    fastio;

    cin >> t;

    string a, b, c;

    while (t--) {
        cin >> a;

        cin >> b;

        cin >> c;

        int tam = a.size();

        bool eh_possivel = true;

        for (int i = 0; i < tam; i++) {
            if (!eh_valido(a[i], b[i], c[i])) {
                eh_possivel = false;
                break;
            }
        }

        cout << (eh_possivel ? "YES\n" : "NO\n");
    }

    return 0;
}
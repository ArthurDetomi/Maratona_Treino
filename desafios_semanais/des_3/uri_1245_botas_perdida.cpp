#include <bits/stdc++.h>

#define endl '\n'

#define pb push_back

#define pii pair<int, int>

using namespace std;

int n;

int main() {
    while (cin >> n) {
        int valor;
        char c;

        map<int, pii> M;

        while (n--) {
            cin >> valor;
            cin >> c;

            if (M.find(valor) == M.end()) {

                if (c == 'E') {
                    M[valor] = pii(1, 0);
                } else {
                    M[valor] = pii(0, 1);
                }

            } else {
                pii p = M[valor];

                if (c == 'E') {
                    p.first++;
                } else if (c == 'D') {
                    p.second++;
                }

                M[valor] = p;
            }
        }

        int cont = 0;

        for (auto v : M) {
            pii p = v.second;

            if (p.first > 0 && p.second > 0) {
                cont += min(p.first, p.second);
            }
        }

        cout << cont << endl;
    }

    return 0;
}
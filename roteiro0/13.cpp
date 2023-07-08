#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

int main(void) {
    int n, r;

    while (cin >> n >> r) {
        vector<bool> vivos(n + 1, false);
        int id;

        for (int i = 0; i < r; i++) {
            cin >> id;
            vivos[id] = true;
        }

        if (n == r) {
            cout << "*";
        } else {
            for (int i = 1; i <= n; i++) {
                if (vivos[i] == false) {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
}
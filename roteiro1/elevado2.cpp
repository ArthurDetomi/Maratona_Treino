#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

int N, C;

int main(void) {
    fastio;
    cin >> N >> C;

    bool excedeu = false;

    int total = 0, S, E;

    while (N--) {
        cin >> S >> E;
        total += (E - S);
        
        if (total > C) {
            excedeu = true;
        }
    }

    cout << (excedeu ? "S\n" : "N\n");

    return 0;
}
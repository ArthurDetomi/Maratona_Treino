#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define MAXN 10001

int n, m;

int mergulhos[MAXN];

int main() {
    fastio;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> mergulhos[i];
    }

    long result = 0, merg_atual = 0;
        
    for (int i = 0; i < n; i++) {
        int p1 = mergulhos[i];  // primeira possibilidade
        int p2 = m - mergulhos[i]; // segunda possibilidade

        if (p1 >= merg_atual && p2 >= merg_atual) {
            merg_atual = min(p1, p2);
        } else if (p1 >= merg_atual) {
            merg_atual = p1;
        } else if (p2 >= merg_atual) {
            merg_atual = p2;
        } else {
            result = -1;
            break;
        }

        result += merg_atual;
    }

    cout << result << endl;

    return 0;
}
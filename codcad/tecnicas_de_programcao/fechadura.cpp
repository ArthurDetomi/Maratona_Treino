#include <bits/stdc++.h>

using namespace std;

#define MAXN 1001

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define MAXN 1001

int n, m;

int fechadura[MAXN];

int main() {
    fastio;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> fechadura[i];
    }

    int mov = 0;
    for (int i = 0; i < n; i++) {
        int diff = fechadura[i] - m;
        if (diff != 0) {
            int prox_pos = i + 1;
            if (diff < 0) {
                fechadura[i] += abs(diff);
                fechadura[prox_pos] += abs(diff);
            } else {
                fechadura[i] -= abs(diff);
                fechadura[prox_pos] -= abs(diff);
            }
            mov +=  abs(diff);
        }
    }

    cout << mov << endl;

    return 0;
}
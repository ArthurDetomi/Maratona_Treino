#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define fastio                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define FOR(i, m, n) for (int i = m; i < n; i++)

#define MAXN 21

vector<long long> fat(MAXN, 1);

void calc_fat() { FOR(i, 1, MAXN) fat[i] = fat[i - 1] * i; }

int main(void) {
    fastio;
    calc_fat();
    int m, n;
    while (cin >> m >> n) {
        cout << fat[m] + fat[n] << endl;
    }
    return 0;
}
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

#define MAX 100001

int n;

vector<int> grafo[MAX];

int peso[MAX];


int main() {
    fastio;

    cin >> n;

    int i, j;

    while (n--) {
        cin >> i >> j;

        grafo[j].pb(i);
    }

    return 0;
}
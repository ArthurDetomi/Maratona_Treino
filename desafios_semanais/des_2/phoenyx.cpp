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

int t, n, k;

int main() {
    fastio;

    cin >> t;

    while (t--) {
        cin >> n >> k;

        vector<int> array(n + 1);

        set<int> sem_repeticao;

        for (int i = 0; i < n; i++) {
            cin >> array[i];
            sem_repeticao.insert(array[i]);
        }

        if ( (int) sem_repeticao.size() > k) {
            cout << -1 << endl;
        } else {
            cout << n * k << endl;
            for (int i = 0; i < n; i++) {
                for (int b : sem_repeticao)
                    cout << b << ' ';
                for (int j = 0; j < k - (int)sem_repeticao.size(); j++)
                    cout << 1 << ' ';
            }
        }
    }

    return 0;
}
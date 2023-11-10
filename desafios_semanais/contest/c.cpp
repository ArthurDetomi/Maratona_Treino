#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define debug printf

using namespace std;

#define MAXM 25

int t, m, n;

string x, s;

int main() {
    fastio;

    cin >> t;

    while (t--) {
        cin >> n >> m;
        cin >> x;
        cin >> s;

        bool is_possible = false;

        int count = 0;

        while (true) {
            if (x.find(s) != string::npos) {
                is_possible = true;
                break;
            }

            if (x.size() > s.size() + MAXM) {
                break;
            }

            x += x;
            count++;
        }

        if (is_possible) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
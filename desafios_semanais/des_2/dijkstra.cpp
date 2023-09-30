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

int main() {
    fastio;

    string joia;

    set<string> joias_distintas;

    while (cin >> joia) {
        joias_distintas.insert(joia);
    }

    cout << joias_distintas.size() << endl;

    return 0;
}
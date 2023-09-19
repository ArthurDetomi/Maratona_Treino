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

int fat(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * fat(n - 1);
}

int N;

int main() {
    fastio;

    cin >> N;

    cout <<  fat(N) << endl;


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define TAM 6

#define VALUES {1,5,10,25,50,100}

int S[] = VALUES;

int v;

int main() {
    fastio;

    cin >> v;

    int it = TAM - 1, qtd = 0;

    while (v > 0 && it >= 0) {
        if (v >= S[it]) {
            v -= S[it];
            qtd++;
        } else {
            it--;
        }
    }

    cout << qtd << endl;
    
    return 0;
}
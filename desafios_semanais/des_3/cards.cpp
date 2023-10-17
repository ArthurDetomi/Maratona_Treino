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

int n;

string input;

int main() {
    fastio;

    cin >> n;
    
    cin >> input;

    char zero = 'z', one = 'n';

    int cont_zero = 0, cont_one = 0;


    for (char c : input) {
        if (c == zero) {
            cont_zero++;
        } else if (c == one) {
            cont_one++;
        }
    }

    int tam_total = cont_one + cont_zero;

    for (int i = 0; i < tam_total; i++) {
        if (cont_one > 0) {
            cout << (i != tam_total - 1 ? "1 ": "1");
            cont_one--;
        } else if (cont_zero > 0) {
            cout << (i != tam_total - 1 ? "0 ": "0");
            cont_zero--;
        }
    }

    cout << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

int N;

int main(void) {
    fastio;

    int cont = 1;
    while (true) {
        cin >> N;
        if (N == 0) {
            break;
        }
        
        cout << "Teste " << cont++ << endl;
        
        int s1 = 0, s2 = 0, J, Z;
        while (N--) {
            cin >> J >> Z;

            s1 += J;
            s2 += Z;

            if (s1 != s2) {
                cout << s1 - s2 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
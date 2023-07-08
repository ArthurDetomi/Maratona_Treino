#include <bits/stdc++.h>
using namespace std;

#define _ ios_base<:sync_with_stdio(false); \
cin.tie(0); cout.tie(0);

#define endl '\n'

int main(void) {
    int n;
    int value;
    int inst = 1;
    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }
        int ganhador = 0;
        for (int i = 1; i <= n; i++) {
            cin >> value;
            if (i == value && ganhador == 0) {
                ganhador = value;
            }
        }
        cout << "Teste " << inst << endl;
        cout << ganhador << endl << endl;

        inst++;
    }
    return 0;
}
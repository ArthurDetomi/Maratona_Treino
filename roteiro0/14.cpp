#include <bits/stdc++.h>
using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

int main(void) {
    int q, d, p;
    while (1) {
        cin >> q;
        if (q == 0) {
            break;
        }
        cin >> d;
        cin >> p;
        int aux = p - q;
        int result = (p * q * d) / aux;
        string pag_plural = (result > 1) ? " paginas" : " pagina";
        cout << result << pag_plural << endl;
    }
    return 0;
}
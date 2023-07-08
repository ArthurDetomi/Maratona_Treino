#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define endl '\n'

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

int main(void) {
    int n;
    int cont = 1;
    while (1) {
        cin >> n;
        if (n == 0)
            break;
        double value = pow(2, n) - 1;
        cout << "Teste " << cont << endl;
        cout << (int)value << endl;
        cont++;
    }
    return 0;
}
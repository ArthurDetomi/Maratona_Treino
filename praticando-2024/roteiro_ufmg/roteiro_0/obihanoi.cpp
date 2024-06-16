#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    int n;
    int cont = 1;

    while (1) {
        cin >> n;
        if (n == 0)
            break;

        int value = pow(2, n) - 1;
        cout << "Teste " << cont << endl;
        cout << value << endl;
        cont++;
    }

    return 0;
}
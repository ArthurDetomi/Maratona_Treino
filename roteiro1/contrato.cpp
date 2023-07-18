#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(void) {
    while (1) {
        string n;
        char d;
        cin >> d >> n;
        if (d == '0' || n == "0") {
            break;
        }

        char tam = (int)n.size();
        for (int i = 0; i < tam; i++) {
            if (n[i] == d) {
                n.erase(i, 1);
                i--;
            }
        }

        while (n[0] == '0') {
            n.erase(0, 1);
        }

        if (n.empty() == true) {
            cout << 0 << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}
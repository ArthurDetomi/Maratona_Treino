#include <bits/stdc++.h>
using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

int main(void) {
    int n;

    while (cin >> n) {
        int d2 = n - 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == d2) {
                    cout << 2;
                } else if (j == i) {
                    cout << 1;
                } else {
                    cout << 3;
                }
            }
            d2--;
            cout << endl;
        }
    }

    return 0;
}
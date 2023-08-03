#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

int main(void) {
    while (true) {
        int n;
        cin >> n;

        if (n == 0)
            break;

        vector<int> V(n, 0);

        int maior = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int value;
                cin >> value;
                V[j] += value;
                if (V[j] > maior) {
                    maior = V[j];
                }
            }
        }

        cout << maior << endl;
    }

    return 0;
}
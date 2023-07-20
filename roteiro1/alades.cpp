#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(void) {
    unsigned h1, m1, h2, m2;
    while (1) {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }

        unsigned min_total;
        if (h1 > h2) {
            min_total = ((24 * 60) - ((h1 * 60) + m1)) + (h2 * 60 + m2);
        } else if (h2 > h1) {
            min_total = (h2 * 60 + m2) - ((h1 * 60) + m1);
        } else {
            if (m1 > m2) {
                min_total = ((24 * 60) - ((h1 * 60) + m1)) + (h2 * 60 + m2);
            } else {
                min_total = (h2 * 60 + m2) - ((h1 * 60) + m1);
            }
        }
        cout << min_total << endl;
    }

    return 0;
}
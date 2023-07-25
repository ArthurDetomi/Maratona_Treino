#include <bits/stdc++.h>

using namespace std;

int main(void) {
    while (true) {
        int a, d;
        cin >> a >> d;

        if (!(a|d)) {
            break;
        }
        
        vector<int> attackers(a);
        vector<int> defenders(d);

        for (int i = 0; i < a; i++) {
            cin >> attackers[i];
        }

        for (int i = 0; i < d; i++) {
            cin >> defenders[i];
        }

        sort(attackers.begin(), attackers.end());
        sort(defenders.begin(), defenders.end());

        if (attackers[0] >= defenders[1] || (attackers[0] == defenders[0] && attackers[0] == defenders[1])) {
            printf("N\n");
        } else {
            printf("Y\n");
        } 
    }
    return 0;
}
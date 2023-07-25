#include <bits/stdc++.h>

using namespace std;

int main(void) {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break; 
        }

        vector<int> figs(n);
        for (int i = 0; i < n; i++) {
            cin >> figs[i];
        }

        sort(figs.begin(), figs.end());

        do {
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    printf(" %d ", figs[i]);
                } else {
                    printf("%d ", figs[i]);
                }
            }
            printf("\n");
        } while (next_permutation(figs.begin(), figs.end()));

        printf("\n");
    }
    return 0;
}
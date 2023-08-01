#include <bits/stdc++.h>

using namespace std;

int main(void) {
    long long n, q;
    scanf("%lld %lld", &n, &q);

    vector<long long> V(n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &V[i]);
    }

    long long num;
    while (q--) {
        scanf("%lld", &num);
        vector<long long>::iterator low = lower_bound(V.begin(), V.end(), num);
        if (low != V.end() && *low == num) {
            printf("%ld\n", (low - V.begin()));
        } else {
            printf("-1\n");
        }
    }

    return 0;
}

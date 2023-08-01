#include <bits/stdc++.h>

using namespace std;

int main(void) {
    long long n, q;
    scanf("%lld %lld", &n, &q);

    vector<long long> V(n);

    unordered_map<long long, int> M;

    pair<long long, int> P;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &V[i]); 
        P.first = V[i];
        P.second = i;
        M.insert(P);
    }

    long long num;
    while (q--) {
        scanf("%lld", &num); 
        if (M.find(num) != M.end()) {
            printf("%d\n", M[num]);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

long long N, M;

long long mdc(long long a, long long b) {
    if (a == 0) return b;
    return mdc(b % a, a);
}
 
int main() {
    scanf("%lld %lld", &N, &M);

    long long X = M;

    while (mdc(N, X) > 1) {
        X--;
    }

    printf("%lld\n", X);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define MAXN 47

vector<long long> sequencia(MAXN);

void fib() {
    sequencia[0] = 0;
    sequencia[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
    }
}

int main() {
    fib();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        printf("%lld%c", sequencia[i], " \n"[i == n - 1]);
    }

    return 0;
}
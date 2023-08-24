#include <bits/stdc++.h>

using namespace std;

#define MAXN 31

int fib[MAXN];
int N;

void calc_fib() {
    fib[0] = fib[1] = 1;
    for (int i = 2; i < MAXN; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main(void) {
    calc_fib();
    scanf("%d", &N);
    printf("%d\n", fib[N]);
    return 0;
}
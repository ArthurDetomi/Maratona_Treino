#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    if (a == 0) return b;
    return mdc(b % a, a);
}

int N, m;

int main() {
    scanf("%d %d", &N, &m);
    
    for (int i = 0; i < N - 1; i += 2) {
        int num;
        scanf("%d", &num);
        m = mdc(num, m);
    }

    printf("%d\n", m);
    return 0;
}
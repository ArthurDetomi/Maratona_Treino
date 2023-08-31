#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

int f91(int n) {
    if (n > 100) {
        return n - 10;
    }
    return f91(f91(n + 11));
}

int N;

int main(void) {
    fastio;

    while (true) {
        scanf("%d", &N);

        if (N == 0)
            break;

        printf("f91(%d) = %d\n", N, f91(N));
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define MAXN 10001

int N, V[MAXN];

int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    sort(V, V + N);
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define MAXN 10001

#define DEST 42195

int N, M;

int P[MAXN];

int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }
    // add ultimo posto
    P[N] = DEST;

    bool ans = true;
    for (int i = 0; i < N; i++) {
        if (P[i] + M < P[i + 1]) {
            ans = false;
            break;
        }
    }


    char resp = (ans) ? 'S' : 'N';
    printf("%c\n", resp);

    return 0;
}
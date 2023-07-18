#include <bits/stdc++.h>

using namespace std;

// 100, 50, 20, 10, 5, 2, 1

int main(void) {
    unsigned n;
    cin >> n;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", n);
    for (int i = 0; i < 7; i++) {
        int qtd = n / notas[i];
        printf("%d nota(s) de R$ %d,00\n",qtd, notas[i]);
        n %= notas[i];
    }

    return 0;
}
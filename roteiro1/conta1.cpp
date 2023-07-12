#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int preco = 7;
    if (n <= 10) {
        printf("%d\n", preco);
    } else {
        if (n <= 30) {
            preco += ((n - 10) * 1);
        }
        if (n >  30 && n <= 100) {
            preco += 20 + ((n - 30) * 2);
        }
        if (n > 100) {
            preco += 20 + 140 + ((n - 100) * 5);
        }
        printf("%d\n", preco);
    }
    return 0;
}
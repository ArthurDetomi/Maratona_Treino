#include <iostream>
#include <stdio.h>
using namespace std;

// Fatorial
int fat(short n);

int main(void) {
    short n;
    cin >> n;
    if (n >= 0 && n <= 12) {
        cout << fat(n) << endl;
    }
    return 0;
}

int fat(short n) {
    int fat = 1;
    for (short i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}
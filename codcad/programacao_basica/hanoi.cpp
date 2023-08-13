#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

unsigned hanoi(unsigned n, char orig = 'A', char dest = 'C', char temp = 'B') {
    if (n == 1) {
        return 1;
    } else {
        int passos = 0;
        passos += hanoi(n - 1, orig, temp, dest);
        passos++;
        passos += hanoi(n - 1, temp, dest, orig);
        return passos;
    }
}


int main() {

    int cont = 0;
    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        printf("Teste %d\n%d\n\n", ++cont, hanoi(n));
    }

    return 0;
}

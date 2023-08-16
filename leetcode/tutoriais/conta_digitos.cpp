#include <bits/stdc++.h>

using namespace std;

unsigned conta_dig(unsigned n) {
    if (n < 10) { // caso base
        return 1;
    }
    return 1 + conta_dig(n / 10);
}

int main(void) {
    cout << conta_dig(10100000) << endl;
    return 0;
}
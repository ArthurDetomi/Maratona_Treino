#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

unsigned fib(unsigned n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return fib(n - 1) + fib(n - 2);
}


int main() {
    unsigned n;
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}

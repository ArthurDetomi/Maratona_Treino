#include <iostream>

using namespace std;

int main(void) {
    int n, p, q;
    char op;
    cin >> n;
    cin >> p >> op >> q;
    if (op == '*') {
        if (p * q > n) {
            cout << "OVERFLOW\n";
            return 0;
        }
        cout << "OK\n";
        return 0;
    } else if (op == '+') {
        if ((p + q) > n) {
            cout << "OVERFLOW\n";
            return 0;
        }
        cout << "OK\n";
    }
    return 0;
}
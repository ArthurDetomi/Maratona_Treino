#include <iostream>

using namespace std;

#define endl '\n'

int main() {
    int n;
    cin >> n;

    int value;
    bool l_a = false, l_b = false;
    for (int i = 0; i < n; i++) {
        cin >> value;
        if (value == 1) {
            l_a = !l_a;
        } else {
            l_a = !l_a;
            l_b = !l_b;
        }
    }

    cout << l_a << endl;
    cout << l_b << endl;
    return 0;
}
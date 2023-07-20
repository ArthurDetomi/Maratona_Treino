#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(void) {
    while (1) {
        string n;
        char d;
        cin >> d >> n;
        if (d == '0' || n == "0") {
            break;
        }

        string result;

        int tam = (int)n.size();
        for (int i = 0; i < tam; i++) {
            if (n[i] != d) {
                result += n[i];
            }
        }

        while (result[0] == '0') {
            result.erase(0, 1);
        }

        if (result.empty() == true) {
            cout << 0 << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}
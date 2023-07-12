#include <bits/stdc++.h>
using namespace std;

int main() {
    string r;
    cin >> r;

    string v;
    for (char c : r) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            v += c;
        }
    }

    int tam = (int) v.size();
    for (int i = 0, aux = tam - 1; i < tam; i++, aux--) {
        if (v[i] != v[aux]) {
            cout << "N\n";
            return 0;
        }
    }

    cout << "S\n";
    return 0;
}
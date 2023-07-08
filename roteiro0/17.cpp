#include <bits/stdc++.h>

using namespace std;

#define _ ios_base<:sync_with_stdio(false); \
cin.tie(0); cout.tie(0);

#define endl '\n'

#define MAXALPHA 27

unordered_map<char, int> carac_to_int(MAXALPHA);

void preenche() {
    char aux = 'a';
    int v = 1;
    while (aux <= 'z') {
        carac_to_int[aux] = v;
        v++;
        aux++;
    }
}

bool ehprimo(int value) {
    for (int i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    string p;
    preenche();

    while (cin >> p) {
        int soma = 0;
        for (char c : p) {
            if (c >= 'a' && c <= 'z') {
                soma += carac_to_int[c];
            } else if (c >= 'A' && c <= 'Z') {
                soma += carac_to_int[tolower(c)] + 26;
            }
        }

        if (ehprimo(soma)) {
            cout << "It is a prime word." << endl;
        } else {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}
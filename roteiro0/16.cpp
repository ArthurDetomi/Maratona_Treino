#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>

using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define TAM_MAX 36

unordered_map<int, char> decs_to_b36(TAM_MAX);

void preenche() {
    char c = 'A';
    int i;
    for (int i = 10; i < TAM_MAX; i++) {
        decs_to_b36[i] = c;
        c++;
    }
}

string conv_dec_b36(int decimal) {
    string b36;
    while (decimal > 0) {
        int resto = decimal % 36;
        if (resto < 10) {
            b36 += to_string(resto);
        } else {
            b36 += decs_to_b36[resto];
        }
        decimal /= 36;
    }
    reverse(b36.begin(), b36.end());
    return b36;
}

int main(void) {
    string a, b;
    preenche();
    while (1) {
        cin >> a >> b;
        if (a == "0" && b == "0") {
            break;
        }

        int decA = stoi(a, nullptr, 36);
        int decB = stoi(b, nullptr, 36);
        int soma = decA + decB;
        string result = conv_dec_b36(soma);
        cout << result << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int restante_digito(const string &str) {
    string nova;

    for (int i = 0; i < (int) str.size() - 1; i++) {
        nova += str[i];
    }

    int value = atoi(nova.c_str());

    return value;
}

int char_digito_para_int(char c) {
    return c - '0';
}

int main() {
    fastio;
    
    string str;

    while (1) {
        cin >> str;

        if (str == "0") {
            break;
        }

        if (str.size() == 1) {
            int value = atoi(str.c_str());

            cout << (value % 17 == 0 ? 1 : 0) << endl;
        } else {
            int d = char_digito_para_int(str[str.size() - 1]);
            
            int resto_dig = restante_digito(str);

            int resultado = abs(resto_dig - (5 * d));

            cout << (resultado % 17 == 0 ? 1 : 0) << endl;
        }
    }

    return 0;
}
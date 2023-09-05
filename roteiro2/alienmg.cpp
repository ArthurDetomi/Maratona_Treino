#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

#define pb push_back

int N;

struct dna {
    string str;
    unordered_map<char, int> letras;

    dna(string text) {
        this->str = text;
        for (char c : text) {
            if (letras.find(c) != letras.end()) {
                letras[c]++;
            } else {
                letras[c] = 0;
            }
        }
    }

    int qtd_por_letra(char c) {
        if (letras.find(c) != letras.end()) {
            return letras[c];
        }
        return 0;
    }
};

bool eh_mesma_especie(dna d1, dna d2) {
    for (int i = 0; i < (int)d1.str.length(); i++) {
        if (d1.qtd_por_letra(d1.str[i]) != d2.qtd_por_letra(d1.str[i])) {
            return false;
        }
    }
    return true;
}

bool comp(dna d1, dna d2) {
    return d1.str.size() < d2.str.size();
}

int main() {
    fastio;
    while (true) {
        cin >> N;

        if (!N)
            break;

        vector<dna> V;

        string str;

        for (int i = 0; i < N; i++) {
            cin >> str;
            dna d = dna(str);
            V.pb(d);
        }

        sort(V.begin(), V.end(), comp);

        int qtd = 1;
        for (int i = 0; i < N - 1; i++) {
            if (!eh_mesma_especie(V[i], V[i + 1])) {
                qtd++;
            }
        }

        cout << ((!qtd) ? 1 : qtd) << endl;
    }

    return 0;
}
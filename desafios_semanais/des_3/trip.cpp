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

#define IMPOSSIVEL INT_MAX

int k;

vector<int> V;

bool eh_valido(int valor) {
    return valor < k;
}

int main() {
    fastio;

    cin >> k;

    int qtd_meses = 12, value;

    int resposta = -1, soma = 0;
    
    while (qtd_meses--) {
        cin >> value;

        soma += value;
        
        if (value >= k && k > 0) {
            resposta = 1;
        }

        V.pb(value);
    }

    // já elimino ser igual a k ou k ser 0
    if (resposta >= 0) {
        cout << 1 << endl;
        return 0;
    }
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (soma < k) {
        cout << -1 << endl;
        return 0;
    }

    sort(V.rbegin(), V.rend());

    resposta = IMPOSSIVEL;

    for (int i = 0; i < (int) V.size() - 1; i++) {
        soma = V[i];

        int qtd = 1;

        for (int j = i + 1; j < (int) V.size(); j++) {
            soma += V[j];
            qtd++;
            
            if (soma >= k) {
                resposta = min(resposta, qtd);
                break;
            }
        }
    }

   
    if (resposta == IMPOSSIVEL) {
        cout << -1 << endl;
    } else {
        cout << resposta << endl;
    }

    return 0;
}
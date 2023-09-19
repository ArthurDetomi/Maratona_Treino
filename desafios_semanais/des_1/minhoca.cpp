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

#define MAX 100

int n, m;

int main() {
    fastio;

    cin >> n >> m;

    int qtd;

    int soma_linhas[n] = {0};
    int soma_colunas[m] = {0};
    
    int maior = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> qtd;
            soma_linhas[i] += qtd;
            soma_colunas[j] += qtd;

            maior = max(max(soma_linhas[i], maior), soma_colunas[j]);
        }
    }

    cout << maior << endl;

    return 0;
}
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int MAX_M = 101;

vector<int> soma_colunas(MAX_M, 0);

int main() {
    int N, M;
    cin >> N >> M;
    
    int maior_valor_linhas = 0, valor;
    for (int i = 0; i < N; i++) {
        int soma_linhas = 0;

        for (int j = 0; j < M; j++) {
            cin >> valor;
            soma_linhas += valor;
            soma_colunas[j] += valor;
        }

        maior_valor_linhas = max(soma_linhas, maior_valor_linhas);
    }
    
    int maior_valor = maior_valor_linhas;
    for (int i = 0; i < M; i++) {
        maior_valor = max(soma_colunas[i], maior_valor);
    }

    cout << maior_valor << endl;
    return 0;
}
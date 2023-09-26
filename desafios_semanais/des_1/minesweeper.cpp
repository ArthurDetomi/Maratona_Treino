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

#define MAX 101

int n, m;

char mat[MAX][MAX];

int char_para_int(char c) { return c - '0'; }

char int_para_char(int num) { return num + '0'; }

bool eh_valido(int l, int c) {
    if (l >= 0 && l < n && c >= 0 && c < m) {
        return true;
    }
    return false;
}

int main() {
    fastio;

    int cont = 1;
    
    while (true) {
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }
        
        if (cont > 1) cout << endl;

        string str;

        for (int i = 0; i < n; i++) {
            cin >> str;
            for (int j = 0; j < m; j++) {
                if (str[j] == '.') {
                    mat[i][j] = '0';
                } else {
                    mat[i][j] = '*';
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // para cada posição * faça
                if (mat[i][j] == '*') {

                    for (int linha_atual = i - 1; linha_atual < i + 2;
                         linha_atual++) {
                        for (int coluna_atual = j - 1; coluna_atual < j + 2;
                             coluna_atual++) {

                            if (eh_valido(linha_atual, coluna_atual) &&
                                mat[linha_atual][coluna_atual] != '*' &&
                                !(linha_atual == i && coluna_atual == j)) {

                                int value = char_para_int(mat[linha_atual][coluna_atual]);
                                value++;
                                mat[linha_atual][coluna_atual] = int_para_char(value);
                            }
                        }
                    }
                }
            }
        }

        cout << "Field #" << cont <<":" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << mat[i][j];
            }
            cout << endl;
        }

        cont++;
    }

    return 0;
}
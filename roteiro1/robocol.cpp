#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

#define MAX 101

int N, M, S;

char mat[MAX][MAX];

enum direcoes { NORTE = 'N', SUL = 'S', LESTE = 'L', OESTE = 'O' };

enum controle { D = 'D', E = 'E', F = 'F' };

char prox_dir(char dir_atual, char c) {
    switch (dir_atual) {
    case NORTE:
        if (c == E) {
            return OESTE;
        } else if (c == D) {
            return LESTE;
        }
        break;
    case SUL:
        if (c == E) {
            return LESTE;
        } else if (c == D) {
            return OESTE;
        }
        break;
    case LESTE:
        if (c == E) {
            return NORTE;
        } else if (c == D) {
            return SUL;
        }
        break;
    case OESTE:
        if (c == E) {
            return SUL;
        } else if (c == D) {
            return NORTE;
        }
        break;
    }
    return dir_atual;
}

void percorre_mat(int &l, int &c, char dir_atual, int &soma) {
    int prox_linha, prox_coluna;
    switch (dir_atual) {

    case NORTE:
        prox_linha = l - 1;
        if (prox_linha >= 0 && mat[prox_linha][c] != '#') {
            l = prox_linha;
            if (mat[l][c] == '*') {
                mat[l][c] = '.';
                soma++;
            }
        }
        break;
    case SUL:
        prox_linha = l + 1;
        if (prox_linha < N && mat[prox_linha][c] != '#') {
            l = prox_linha;
            if (mat[l][c] == '*') {
                mat[l][c] = '.';
                soma++;
            }
        }
        break;
    case LESTE:
        prox_coluna = c + 1;
        if (prox_coluna < M && mat[l][prox_coluna] != '#') {
            c = prox_coluna;
            if (mat[l][c] == '*') {
                mat[l][c] = '.';
                soma++;
            }
        }
        break;
    case OESTE:
        prox_coluna = c - 1;
        if (prox_coluna >= 0 && mat[l][prox_coluna] != '#') {
            c = prox_coluna;
            if (mat[l][c] == '*') {
                mat[l][c] = '.';
                soma++;
            }
        }
        break;
    }
}

int inicia(int l, int c, char dir_atual, string comandos) {
    int soma = 0;

    for (int i = 0; i < (int)comandos.length(); i++) {
        char comando_atual = comandos[i];
        switch (comando_atual) {

        case D:
        case E:
            dir_atual = prox_dir(dir_atual, comando_atual);
            break;
        case F:
            percorre_mat(l, c, dir_atual, soma);
            break;
        }
    }

    return soma;
}

bool eh_enum(char c) {
    if (c == NORTE || c == SUL || c == LESTE || c == OESTE) {
        return true;
    }
    return false;
}

int main(void) {
    fastio;

    while (true) {
        cin >> N >> M >> S;

        if (!(N | M | S))
            break;

        int l, c;
        char current_direction;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
                if (eh_enum(mat[i][j])) {
                    current_direction = mat[i][j];
                    l = i;
                    c = j;
                }
            }
        }

        string comandos;
        cin >> comandos;

        cout << inicia(l, c, current_direction, comandos) << endl;
    }

    return 0;
}
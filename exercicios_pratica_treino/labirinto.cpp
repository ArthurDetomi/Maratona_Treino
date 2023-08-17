#include <bits/stdc++.h>

using namespace std;

struct Pos {
    int l;
    int c;
};

void show(vector<string> &mat) {
    char c;
    for (auto line : mat) {
        cout << line << endl;
    }
    getchar();
}

// retorna um vetor com todos os vizinhos da posição p
vector<Pos> get_vizinhos(Pos p) {
    return {{p.l, p.c - 1}, {p.l - 1, p.c}, {p.l, p.c + 1}, {p.l + 1, p.c}};
}

bool encontrou_destino(Pos pos_atual, Pos destino) {
    return pos_atual.l == destino.l && pos_atual.c == destino.c;
}

bool solve(Pos pos_atual, Pos destino, vector<string> &mat) {
    if (encontrou_destino(pos_atual, destino)) {
        mat[pos_atual.l][pos_atual.c] = '.';
        return true;
    }
    if (mat[pos_atual.l][pos_atual.c] != '_') {
        return false;
    }

    mat[pos_atual.l][pos_atual.c] = '.';

    show(mat);

    for (auto cam : get_vizinhos(pos_atual)) {
        if (solve(cam, destino, mat)) {
            return true;
        }
    }

    show(mat);
    mat[pos_atual.l][pos_atual.c] = '@';

    return false;
}

int main(void) {
    int nl = 0, nc = 0;
    cin >> nl >> nc;
    vector<string> mat(nl, ""); // começa com nl strings ""
    getchar();                  // remove \n after nc
    Pos inicio, fim;

    // carregando matriz
    for (int i = 0; i < nl; i++)
        getline(cin, mat[i]);

    // procurando inicio e fim e colocando ' ' nas posições iniciais
    for (int l = 0; l < nl; l++) {
        for (int c = 0; c < nc; c++) {
            if (mat[l][c] == 'I') {
                mat[l][c] = '_';
                inicio = Pos{l, c};
            }
            if (mat[l][c] == 'F') {
                mat[l][c] = '_';
                fim = Pos{l, c};
            }
        }
    }

    solve(inicio, fim, mat);

    for (string line : mat)
        cout << line << endl;
    cout << "       nl=" << nl << " nc=" << nc << "\n";
    cout << "inicio: l=" << inicio.l << " , c=" << inicio.c << endl;
    cout << "   fim: l=" << fim.l << " , c=" << fim.c << endl;
}
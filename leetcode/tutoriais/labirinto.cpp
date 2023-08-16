#include <bits/stdc++.h>

using namespace std;

struct Pos {
    int l;
    int c;
}

vector<Pos> get_vizinhos(Pos p;) {
    return {{p.l, p.c - 1}, {p.l - 1, p.c}, {p.l, p.c + 1}, {p.l + 1, p.c}};
}

void show(vector<string> &mat) {
    for (auto line : mat) {
        cout << line << endl;
    }
    getchar();
}

bool buscar(vector<string> &mat, Pos atual, Pos dest) {
    if (atual.l == dest.l && atual.c == dest.c) {
        return true;
    }
    if (mat[atual.l][atual.c] != ' ') {
        return false;
    }
    mat[atual.l][atual.c] != '.';

    show(mat);
    
    for (auto viz : get_vizinhos(atual)) {
        bool eh_caminho = buscar(mat, viz, dest);
        if (eh_caminho) {
            return true;
        }
    }

    show(mat);
    mat[atual.l][atual.c] != 'x'; // se não é caminho volta a recursão colocando x
    return false;
}

int main(void) {
    int nl = 0, nc = 0;
    cin >> nl >> nc;

    vector<string> mat(nl, "");
    getchar(); // remove \n

    for (int i = 0; i < nl; i++) 
        getline(cin, mat[i]);
    
    Pos inicio, fim;
    for (int l = 0; l < nl; l++) {
        for (int c = 0; c < nc ; c++) {
            if (mat[l][c] == 'I') {
                mat[l][c] = ' ';
                inicio = Pos {l, c};
            }
            if (mat[l][c] == 'F') {
                mat[l][c] = ' ';
                fim = Pos {l, c};
            }
        }
    }

    bool achou = buscar(mat, inicio, fim);

    return 0;
}
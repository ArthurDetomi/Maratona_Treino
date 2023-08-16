#include <bits/stdc++.h>

#define endl '\n'

void show(vector<string> mat) {
    for (int l = 0; l < (int)mat.size(); l++)
        cout << mat[l] << endl;
    getchar();
}

bool esta_fora(vector<string> &mat, int l, int c) {
    int nl = mat.size();
    int nc = mat[0].size();
    if (l < 0 || l >= nl) {
        return true;
    }
    if (c < 0 || c >= nc) {
        return true;
    }
    return false;
}

void tocar_fogo(vector<string> &mat, int l, int c) {
    int nl = mat.size();
    int nc = mat[0].size();

    // parada
    if (esta_fora(mat, l, c)) {
        return;
    }
    if (mat[l][c] != '#') {
        char backup = mat[l][c];
        mat[l][c] = '@';
        show(mat);
        mat[l][c] = backup;
    }

    mat[l][c] = '0'; // ação

    show(mat);
    // tocar_fogo(mat, l, c); // eu
    tocar_fogo(mat, l, c - 1);     // quem está a minha esquerda
    tocar_fogo(mat, l - 1, c);     // quem está acima de mim
    tocar_fogo(mat, l, c + 1);     // quem está a minha direita
    tocar_fogo(mat, l + 1, c - 1); // quem está abaixo de mim

    mat[l][c] = 'x';
    show(mat);
}

int tocar_fogo2(vector<string> &mat, int l, int c) {
    int nl = mat.size();
    int nc = mat[0].size();

    // parada
    if (esta_fora(mat, l, c)) {
        return 0;
    }
    if (mat[l][c] != '#') {
        char backup = mat[l][c];
        mat[l][c] = '@';
        show(mat);
        mat[l][c] = backup;
        return 0;
    }

    mat[l][c] = '0'; // ação
    int cont = 1;

    show(mat);
    // tocar_fogo2(mat, l, c); // eu
    cont += tocar_fogo2(mat, l, c - 1);     // quem está a minha esquerda
    cont += tocar_fogo2(mat, l - 1, c);     // quem está acima de mim
    cont += tocar_fogo2(mat, l, c + 1);     // quem está a minha direita
    cont += tocar_fogo2(mat, l + 1, c - 1); // quem está abaixo de mim

    mat[l][c] = 'x';
    show(mat);
    return cont;
}

int main() {
    int nl = 0, nc = 0, lfire = 0, cfire = 0;

    scanf("%d %d %d %d", &nl, &nc, &lfire, &cfire);

    vector<string> mat;
    for (int l = 0; l < nl; l++) {
        string line;
        cin >> line;
        mat.push_back(line);
    }

    tocar_fogo(mat, lfire, cfire, ) show(mat);
}
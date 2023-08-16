#include <bits/stdc++.h>
#include <fstream>

using namespace std;

#define endl '\n'

bool posso_inserir(string &line, int index, int value, int prox) {
    for (int i = index + 1; i < index + 1 + prox; i++) {
        if (i < line.size() && line[i] == value + '0') {
            return false;
        }
    }
    for (int i = index - prox; i < index; i++) {
        if (i >= 0 && line[i] == value + '0') {
            return false;
        }
    }
    return true;
}

bool preencher(string &line, int index, int lim, int prox) {
    if (line.size() == index) {
        cout << line << " <-----" << endl;
        return true;
    }
    if (line[index] != '.') {
        return preencher(line, index + 1, lim, prox);
    }
    // testou todos os valores
    for (int value = 0; value < lim; value++) {
        if (posso_inserir(line, index, value, sprox)) {
            line[index] = value + '0';
            cout << line << endl;
            if (preencher(line, index + 1, lim, prox)) {
                return true;
            }
        }
    }
    // retorno
    line[index] = '.'; 
    return false;
}

int main(void) {
    ifstream arq("input.txt");
    string line;
    int prox = 0;
    arq >> line >> prox;

    int lim = 1;
    preencher(line, 0, lim, prox);
    return 0;
}
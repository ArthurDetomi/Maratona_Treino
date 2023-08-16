#include <iostream>
#include <vector>

using namespace std;

int R, K;
vector<int> notas;

bool valor_eh_valido(int value, int soma) {
    for (auto v : notas) {
        if (value == v) {
            return false;
        }
    }

    if (value + soma > R) {
        return false;
    }
    return true;
}

int recibo(int valor, int qtd, int soma) {
    if (qtd == K) {
        if (soma == R) {
            return 1;
        } 
        return 0;
    } 
    int cont = 0;

    for (int v = valor; v >= 1; v--) {
        if (valor_eh_valido(v, soma)) {
            notas.push_back(v);
            cont += recibo(v, qtd + 1, soma + v);
            notas.pop_back();
        }
    }

    return cont;
}

int main() {
    scanf("%d %d", &R, &K);
    printf("%d\n", recibo(R, 0, 0));
    return 0;
}

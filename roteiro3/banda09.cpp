#include <bits/stdc++.h>

using namespace std;

#define D 2
#define T 3
#define MAXM 10100
#define MAXN 103

int N, M;
int pont[MAXN][MAXM];

int calcula_soma(set<int> &trio) {
    int soma = 0;
    for (int i : trio) {
        for (int j : trio) {
            soma += pont[i][j];
        }
    }
    return soma;
}

bool eh_valido(int c, set<int> &trio) {
    if (trio.find(c) != trio.end() && c <= N) {
        return false;
    }
    return true;
}

void melhor_trio(int cantor_atual, int qtd, set<int> &trio, set<int> &result) {
    if (qtd == T) {
        if (calcula_soma(trio) >= calcula_soma(result)) {
            result = trio;
        }
        return;
    }

    for (int i = cantor_atual; i <= N; i++) {
        if (eh_valido(i, trio)) {
            trio.insert(i);
            melhor_trio(i, qtd + 1, trio, result);
            trio.erase(i);
        }
    }
}


void print_trio(set<int> &trio) {
    for (auto c : trio) 
        printf("%d ", c);
    printf("\n");
}

int main(void) {
    scanf("%d %d", &N, &M);

    int X, Y, Z;
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &X, &Y, &Z);
        pont[X][Y] = Z;
        pont[Y][X] = Z;
    }

    set<int> trio;
    set<int> result;
    melhor_trio(1, 0, trio, result);
    
    print_trio(result);

    return 0;
}

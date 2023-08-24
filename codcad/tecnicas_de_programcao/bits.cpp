#include <bits/stdc++.h>

using namespace std;

#define MAXN 1001

int N, K;

vector<int> seq;

bool eh_valido(int v, int qtd) {
    if (v == 0) return true;
 
    int pos = qtd - 1;

    int sum = 0;

    while (seq[pos] == 1) {
        sum++;
        pos--;
    }

    return sum < K - 1;
}

unsigned long backtrack(int qtd) {
    if (qtd == N) {
        return 1;   
    }

    int cont = 0;

    for (int i = 0; i <= 1; i++) {
        if (eh_valido(i, qtd)) {
            seq.push_back(i);
            cont += backtrack(qtd + 1);
            seq.pop_back();
        }
    }

    return cont;
}

int main() {
    scanf("%d %d", &N, &K);
    printf("%ld\n", backtrack(0));
    return 0;
}
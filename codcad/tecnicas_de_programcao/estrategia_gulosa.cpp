#include <bits/stdc++.h>

using namespace std;


int S[] = {1,5,10,25,50,100};

int main(void) {
    int V;

    int size = sizeof(S) / sizeof(S[0]); 

    scanf("%d", &V);

    int qtd = 0;

    int pos = size - 1;
    
    while (V > 0) {
        if (S[pos] <= V) {
            V -= S[pos];
            qtd++;
        } else {
            pos--;
        }
    }

    printf("%d\n", qtd);
    return 0;
}
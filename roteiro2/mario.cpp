#include <bits/stdc++.h>

using namespace std;

// Os armarios estão ordenados de 1 ate ..., ao mudar os armários ele muda o número para que se mantenha a ordenação 
// {1, 3, 5, 6, 8} quero 4 armários para o 1 => {1, 3, 2, 4} => 2 mudanças

#define endl '\n'

// Implementação do Gian, ainda não entendi 100%

int main(void) {
    while (true) {
        int n, l;
        cin >> n >> l;
        if (!(n|l)) {
            break;
        }
        
        vector<int> posicoes(l);
        for (int i = 0; i < l; i++) {
            cin >> posicoes[i];
        }

        int ans = INT_MIN;
        for (int i = 0; i < l; i++) {
            vector<int>::iterator up = upper_bound(posicoes.begin(), posicoes.end(), posicoes[i] + n - 1); 
            int value = up - posicoes.begin();
            ans = max(ans, value - i);
        }
        cout << n - ans << endl;
    }
    return 0;
}
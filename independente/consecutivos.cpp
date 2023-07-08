#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

#define endl '\n'

int main() {
    int n, value = 0;
    cin >> n;
    int aux = 0;

    int soma = 0, maior = 0;
    for (int i = 0; i < n; i++) {
        aux = value;
        cin >> value;
        if (i == 0) {
            aux = value;
        }
        if (aux == value) {
            ++soma;
        } else {
            soma = 1;
        }

        if (soma > maior) {
            maior = soma;
        }
    }

    cout << maior << endl;

    return 0;
}

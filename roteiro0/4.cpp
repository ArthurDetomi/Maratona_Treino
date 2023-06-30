#include <iostream>

using namespace std;

int main(void) {
    int r, rodada[1000];
    int soma1 = 0, soma2 = 0, cont = 0;
    
    while (1) {
        cin >> r;
        if (r == 0) break;
        int a, b;
        for (int i = 0; i < r; i++) {
            cin >> a >> b;
            soma1 += a;
            soma2 += b;
        }
        if (soma1 > soma2) {
            rodada[cont] = 1;
        } else {
            rodada[cont] = 2;
        }   
        cont++;
        soma1 = soma2 = 0;
    }

    for (int i = 0; i < cont; i++) {
        if (rodada[i] == 1) {
            cout << "Teste " << i + 1 << endl;
            cout << "Aldo\n\n";
        } else {
            cout << "Teste " << i + 1 << endl;
            cout << "Beto\n\n";
        }
    }
    return 0;
}
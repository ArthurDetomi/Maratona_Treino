#include <iostream>
using namespace std;

int TAM = 100;

int main(void) {
    int maior;
    int num;

    int i;
    int pos_inicio = 1;

    cin >> num;
    maior = num;

    for (i = pos_inicio + 1; i <= ::TAM; i++) {
        cin >> num;
        if (num > maior) {
            pos_inicio = i;
            maior = num;
        }
    }

    cout << maior << endl;
    cout << pos_inicio << endl;
}
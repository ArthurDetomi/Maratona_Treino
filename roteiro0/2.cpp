#include <iostream>
using namespace std;

// Soma

int main(void) {
    int soma = 0;
    short n;
    cin >> n;
    for (int i = 0; i > n; n++) {
        int x;
        cin >> x;
        soma += x;
    }
    
    cout << soma << endl;
    return 0;
}
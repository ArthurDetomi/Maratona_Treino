#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(void) {
    int n;
    int cont = 0;

    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        string conta;
        cin >> conta;

        queue<char> operadores;

        int soma = 0;
        int tam = conta.size();

        
        queue<int> numeros;
        
        int pos = 0;
        while (pos < tam) {
            string num;
            if (isdigit(conta[pos])) {
                while (isdigit(conta[pos])) {
                    num += conta[pos];
                    pos++;
                }
                int v = atoi(num.c_str());
                numeros.push(v);
            } else {
                operadores.push(conta[pos]);
                pos++;
            }
        }

        soma = numeros.front();
        numeros.pop();

        while (!numeros.empty()) {
            int v = numeros.front();
            numeros.pop();

            if (!operadores.empty()) {
                char op = operadores.front();
                operadores.pop();
                if (op == '+') {
                    soma += v;
                } else {
                    soma -= v;
                }
            }
        }

        printf("Teste %d\n%d\n\n", ++cont, soma);
    }
    return 0;
}
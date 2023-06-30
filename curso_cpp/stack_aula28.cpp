#include <iostream>

// incluindo estrutura pilha
#include <stack>

using namespace std;

void imprime(string text, long value);

int main(void) {
    // Declaração
    stack<string> cartas;

    (cartas.empty()) ? cout << "Pilha vazia\n" : cout << "Não Vazia\n";

    // Adicionando elementos
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    // Imprimindo tamanho
    imprime("Tamanho =", cartas.size());

    // Retirando elemento
    cartas.pop(); // Rei de paus removido

    // Imprime o tamanho
    imprime("Tamanho =", cartas.size());

    // Imprime rei de ouros
    cout << "Elemento topo = " << cartas.top() << endl;

    cartas.pop();

    // Imprime rei de Espadas
    cout << "Elemento topo = " << cartas.top() << endl;

    while (!cartas.empty()) {
        cartas.pop();
    }

    (cartas.empty()) ? cout << "Pilha vazia\n" : cout << "Não Vazia\n";
    
    return 0;
}

void imprime(string text, long value) {
    cout << text << value << endl;
}


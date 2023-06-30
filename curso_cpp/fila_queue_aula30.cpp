#include <iostream>

// incluindo fila
#include <iterator>
#include <queue>

using namespace std;

void imprime(string text, long value) {
    cout << text << value << endl;
}

int main(void) { 
    // Declaração
    queue<string> cartas;

    // Adicionando elementos, lembrando add no início
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    // Imprime o tamanho
    imprime("Tamanho =", cartas.size());

    // imprimindo primeira carta
    cout << "Carta " << cartas.front() << endl ;

    // imprimindo ultima carta
    cout << "Carta " << cartas.back() << endl;

    cout << "\tLoop inicio\n";
    while (!cartas.empty()) {
        cout << "Carta " << cartas.front() << endl;
        cartas.pop();
    }

    return 0; 
}
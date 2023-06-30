#include <algorithm>
#include <iostream>

// incluindo lista
#include <list>
#include <ratio>

using namespace std;

int main(void) {
    // Declrando lista tamanho 50
    // list<string> lista(50, 5) // atribuindo 5 para todos os 50 elementos da lista
    list<int> aulas;
    
    for (int i = 0; i < 10; i++) {
        aulas.push_back(i);
    }

    // Declarando iterator para inserir em uma determinada posição
    list<int>::iterator it;

    // Atribuindo o ponteiro para o inicio da lista para o iterator
    it = aulas.begin();

    // Mandando o iterator para posição 5 do array especificamente
    advance(it, 5);

    // Será inserido na posição 5 o valor 11
    aulas.insert(it, 92);

    // Remove o 92 que iria ser inserido
    aulas.erase(--it);

    // ordena a lista
    aulas.sort();

    // Inverte a lista
    aulas.reverse();


    list<int> mescla;
    mescla.push_front(1);
    mescla.push_front(2);

    // faz o merge adiciona uma lista à outra
    aulas.merge(mescla);

    for (int value : aulas) {
        // std::cout estou especificando o escopo
        cout << "Valor = " << value << endl;
    }

    while (!aulas.empty()) {
        cout << "Valor " << aulas.front() << endl;
        aulas.pop_front();
    }

    // Remove todos os elementos da lista
    aulas.clear();

    return 0;
}
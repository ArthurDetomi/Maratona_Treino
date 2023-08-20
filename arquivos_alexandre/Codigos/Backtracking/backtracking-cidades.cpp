#include <cstdio>
#include <iostream>
#include <iterator>
#include <vector>

//Percorre a linha atual retornando a proxima coluna com o valor 1 caso exista 
void escolheProximaCidade(int mapa[8][8], int n, int x[], int used[], int linha, int k){
    int i;
    if (k == n){
        if (mapa[x[k-1]][0] == 1) {
            std::cout << "Caminho: "; 
            for (int i = 0; i < n; i++)
                std::cout << x[i] + 1 << ", ";
            std::cout << std::endl;

            std::cout << "Valores das ligacoes no caminho: ";
            for (int i = 0; i < n - 1; i++)
                std::cout << mapa[x[i]][x[i+1]] << ", ";
            std::cout << mapa[x[n-1]][x[0]];
            std::cout << std::endl;
        }
    }
    else{
        for (i = 1; i < n; i++){
            //Verifica se existe caminho da cidade atual para a proxima 
            //evita construir caminhos invalidos que nao serao uma solucao do problema
            if (!used[i] && mapa[linha][i] == 1){ 
                used[i] = 1;
                x[k] = i; //Coloca i no conjunto solucao 
                printf("k = %d, i = %d\n", k, i);
                escolheProximaCidade(mapa,n,x,used,i,k+1);
                used[i] = 0; //Backtracking                 
            }
        }
    }
}

int main(){
    int n = 8;
    int mapa[8][8] ={   0, 0, 1, 0, 1, 1, 1, 0,
                        0, 1, 0, 0, 1, 0, 0, 1,
                        1, 0, 1, 1, 0, 1, 1, 0,
                        0, 0, 1, 1, 0, 0, 1, 0,
                        1, 1, 0, 1, 1, 0, 0, 0,
                        0, 0, 1, 1, 0, 0, 1, 1,
                        1, 0, 1, 1, 0, 1, 1, 1,
                        0, 1, 1, 1, 0, 1, 1, 1}; 

    int x[n], used[n]; //used: controla quais cidades ja estao no caminho 
    x[0] = 0; //Como a cidade 0 como ponto de partida 
    used[0] = 1;

    for (int i = 1; i < n; i++)
        used[i] = 0;
    
    //Constroi o caminho recursivamente 
    escolheProximaCidade(mapa,n,x,used,0,1);

    return 0;
}

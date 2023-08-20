#include <iostream>
#include <vector> 

using namespace std;

void verificarGrupos(int M[8][8], int n, int r, int x[], int next, int k, std::vector<std::vector<int>> *grupos){
    bool seConhecem = true;
    if (k == r){
        for (int i = 0; i < r - 1; i++) {
            for (int j = i + 1; j < r; j++){
                if (M[x[i]][x[j]] == 0) {
                    seConhecem = false;
                    break;
                }
            } 
            if (seConhecem == false)
                break;
        }

        if (seConhecem){
            std::vector<int> elementos;
            for (int i = 0; i < r; i++)
                elementos.push_back((x[i]));
            (*grupos).push_back(elementos);
        }
    }
    else{
        //Gera o proximo elemento da combinacao 
        for (int i = next; i < n; i++){
            x[k] = i;
            printf("k = %d, i = %d\n", k, i);
            verificarGrupos(M, n, r, x, i + 1, k + 1, grupos);
        }
    }
}

int main(){
    int n = 8;
    int matriz[8][8] = {1, 0, 1, 1, 1, 1, 1, 0,
                        0, 1, 0, 0, 1, 0, 0, 1,
                        1, 0, 1, 1, 0, 1, 1, 1,
                        1, 0, 1, 1, 1, 1, 1, 1,
                        1, 1, 0, 1, 1, 0, 0, 0,
                        1, 0, 1, 1, 0, 1, 1, 1,
                        1, 0, 1, 1, 0, 1, 1, 0,
                        0, 1, 1, 1, 0, 1, 0, 1};
    int r;
    printf("Entre com o valor de r: ");
    scanf("%d", &r);
    int x[r];   
    std::vector<std::vector<int>> grupos;
    verificarGrupos(matriz, n, r, x, 0, 0, &grupos); 

    //Imprime solucao
    int i = 0;
    for (std::vector<int> c: grupos){
        std::cout << "Grupo " << i << ":" << std::endl;
        for (int v: c){
            std::cout << v + 1 << ", ";
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
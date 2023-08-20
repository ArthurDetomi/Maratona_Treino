#include <iostream>
#include <vector>

void permutacao(int n, int x[], int used[], int k, std::vector<std::vector<int>> *grupos){
    int i;
    if (k == n){
        std::vector<int> elementos;
        for (int i = 0; i < n; i++)
            elementos.push_back((x[i]));
        (*grupos).push_back(elementos);
    }
    else{
        for (i = 1; i < n; i++){
            if (!used[i]){
                used[i] = 1;
                x[k] = i;
                printf("k = %d, i = %d\n", k, i);
                permutacao(n, x, used, k + 1, grupos);
                used[i] = 0;
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
    
    int x[n], used[n];
    x[0] = 0;
    used[0] = 1;
    for (int i = 1; i < n; i++)
        used[i] = 0;
    
    std::vector<std::vector<int>> grupos;
    permutacao(n, x, used, 1, &grupos);

    int i = 0;
    /*for (std::vector<int> s: grupos){
        std::cout << "Grupo " << i << ":" << std::endl;
        for (int v: s){
            std::cout << v << ", ";
        }
        std::cout << std::endl;
        i++;
    }*/

    std::vector<std::vector<int>> solucao;
    for (std::vector<int> g: grupos){
        bool existeCaminho = true;
        for (int j = 0; j < g.size() - 1; j++){
            if (mapa[g.at(j)][g.at(j+1)] == 0){
                existeCaminho = false;
                break;
            }
        }
        if (existeCaminho && mapa[g.at(g.size()-1)][g.at(0)] == 1){
            solucao.push_back(g);
        }
    }

    //Imprime solucao
    i = 0;
    for (std::vector<int> s: solucao){
        std::cout << "Caminho " << i << ":" << std::endl;
        for (int v: s){
            std::cout << v + 1 << ", ";
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}

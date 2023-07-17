#include <bits/stdc++.h>
using namespace std;

#define T 5

int main(void) {
    int n;
    cin >> n;
    int cont = 0;
    while (n--) {
        vector<int> mao(T);
        vector<int> cartas(14, 0);

        for (int i = 0; i < T; i++) {
            cin >> mao[i];
            cartas[mao[i]]++; // dessa forma sei quantas vezes se repetiu cada
                              // carta
        }

        // ordenando mao
        sort(mao.begin(), mao.end());

        int pontos = 0;
        // primeira condicao
        int seq = 0;
        for (int i = 0; i < T; i++) {
            if (mao[i] == mao[0] + i) {
                seq++;
            }
        }
        if (seq == T) {
            // x + 200 pontos
            pontos += mao[0] + 200;

        } else {
            for (int i = 1; i <= 13; i++) {
                // segunda condicao
                if (cartas[i] == 4) {
                    pontos += i + 180;
                    break;
                }

                // terceira condicao
                bool c = false;
                if (cartas[i] == 3) {
                    for (int j = 1; j <= 13; j++) {
                        // trinca e um par
                        if (cartas[j] == 2) {
                            pontos += 160 + i;
                            c = true;
                            break;
                        }
                    }

                    // somente trinca ocorreu
                    if (!c) {
                        pontos += i + 140;
                        c = true;
                    }
                }

                // verifica quinta condição
                if (cartas[i] == 2) {
                    int aux;
                    bool v = false, t = false;
                    for (int j = 1; j < 14; j++) {
                        if (j != i) {
                            if (cartas[j] == 2) {
                                aux = j;
                                v = true;
                                c = true; // quero que saia do loop após isso
                            }
                            if (cartas[j] == 3) {
                                // ocorreu uma trinca e um par
                                t = true;
                                c = true;
                                aux = j;
                            }
                        }
                    }
                    if (t) {
                        pontos += 160 + aux;
                    }
                    if (v && !t) {
                        if (i > aux) {
                            pontos += i * 3 + 2 * aux + 20;
                        } else {
                            pontos += aux * 3 + 2 * i + 20;
                        }
                    } else if (!v && !t) {
                        pontos += i;
                    }
                }

                // c é reponsável por sair do loop
                if (c) {
                    break;
                }
            }
        }
        printf("Teste %d\n%d\n\n", ++cont, pontos);
    }

    return 0;
}
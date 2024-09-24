#include <bits/stdc++.h>
using namespace std;

#include <algorithm>
#include <vector>
using namespace std;

int matrixScore(vector<vector<int>> grid) {
  int n = grid.size();    // Número de linhas
  int m = grid[0].size(); // Número de colunas

  // Passo 1: Garantir que a primeira coluna de todas as linhas seja composta
  // apenas por 1s
  for (int i = 0; i < n; i++) {
    if (grid[i][0] == 0) {
      // Se a primeira coluna da linha `i` for 0, fazemos "flip" na linha
      // inteira
      for (int j = 0; j < m; j++) {
        grid[i][j] ^= 1; // O operador XOR (^) alterna 0 para 1 e 1 para 0
      }
    }
  }

  // A contribuição da primeira coluna para a pontuação final é sempre n *
  // 2^(m-1), pois todas as linhas começarão com 1 após o "flip" acima
  int ans = (1 << (m - 1)) * n; // (1 << (m-1)) é o valor 2^(m-1), multiplicado
                                // pelo número de linhas `n`

  // Passo 2: Maximizar o número de 1s nas colunas restantes (da segunda coluna
  // em diante)
  for (int j = 1; j < m; j++) {
    int count = 0;
    // Contar quantos 1s há na coluna `j`
    for (int i = 0; i < n; i++) {
      count += grid[i][j];
    }

    // A pontuação dessa coluna será a soma dos valores 2^(m-j-1) multiplicados
    // pelo maior número de 1s ou de 0s (invertendo a coluna, se necessário)
    ans += (1 << (m - j - 1)) * max(count, n - count);
  }

  // Retorna a pontuação máxima obtida após as operações
  return ans;
}

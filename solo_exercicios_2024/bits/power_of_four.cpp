#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

bool isPowerFour(int n) {
  if (n <= 3) {
    return false;
  }

  return (n & (n - 1)) == 0 && ((n & 1431655765) == n);
}

int main() {
  int n;
  while (true) {
    cin >> n;
    if (n <= 0) {
      break;
    }

    if (isPowerFour(n)) {
      cout << "eh potencia de 4";
    } else {
      cout << "nao eh potencia de 4";
    }
    cout << endl;
  }

  /*
   int mask = 0;
   for (int i = 0; i < 32; i += 2) { // Posições 0, 2, 4, ...
     mask |= (1 << i);               // Define o bit na posição i
   }
   std::cout << "Mask: " << mask << std::endl; // Deve imprimir 1431655765
   */

  return 0;
}
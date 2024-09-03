#include <bits/stdc++.h>

using namespace std;

int main() {

  int x;

  cin >> x;

  // Está manipulando o último bit
  if (x & 1) {
    cout << "É impar";
  } else {
    cout << "É par";
  }

  return 0;
}
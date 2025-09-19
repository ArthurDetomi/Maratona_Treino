#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool is_odd(int n) {
  return (n & 1) == 1 ? true : false;
}

int main() {
  int n;

  cin >> n; 

  cout << (is_odd(n) ? "Is Odd (Impar)" : "Is Even (Par)") << endl;

  return 0;
}
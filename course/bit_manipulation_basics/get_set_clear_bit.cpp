#include <bits/stdc++.h>

using namespace std;

int get_ith_bit(int n, int i) {
  int mask = 1 << i;

  return ((n & mask) == 0) ? 0 : 1;
}

int set_ith_bit(int n, int i) {
  int mask = 1 << i;

  return n | mask;
}

int clear_ith_bit(int n, int i) {
  int mask = (-1 ^ (1 << i));
  return n & mask;
}

int update_ith_bit(int n, int i, int v) {
  if (v < 0 || v > 1) {
    cout << "valor invalido\n";
    return -1;
  }

  int n_v = clear_ith_bit(n, i);

  int mask = v << i;

  return n_v | mask;
}

int main() {
  int n, i, v;

  cin >> n >> i >> v;

  cout << "Get ith bit = " << get_ith_bit(n, i) << endl;

  cout << "Clear ith bit = " << clear_ith_bit(n, i) << endl;

  cout << "set_ith_bit = " << set_ith_bit(n, i) << endl;

  cout << "update_ith_bit = " << update_ith_bit(n, i, v) << endl;

  return 0;
}
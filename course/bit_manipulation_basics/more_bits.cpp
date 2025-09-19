#include <bits/stdc++.h>

using namespace std;

int clear_last_i_bits(int n, int i) {
  int mask = (-1 << i);

  return n & mask;
}

int clear_range_of_bits(int n, int i, int j) {
  int mask_cb1 = -1 << (j + 1);
  int mask_cb2 = (1 << i) - 1;

  int mask_total = mask_cb1 | mask_cb2;

  return n & mask_total;
}

int main() {
  int n, i, j;

  cin >> n >> i >> j;

  //cout << "clear_last_i_bits = " << clear_last_i_bits(n, i) << endl;
  
  cout << "clear_range_of_bits = " << clear_range_of_bits(n, i, j) << endl;

  return 0;
}
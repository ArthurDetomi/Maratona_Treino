#include <bits/stdc++.h>

using namespace std;

int clear_range_of_bits(int n, int i, int j) {
  int mask_cb1 = -1 << (j + 1);
  int mask_cb2 = (1 << i) - 1;

  int mask_total = mask_cb1 | mask_cb2;

  return n & mask_total;
}

int replace_i_bits(int n, int m, int i, int j) {
  int n_aux = clear_range_of_bits(n, i, j);
  int m_aux = m << i;
  
  return n_aux | m_aux;
}

int main() { 

  int n, m, i, j;

  cin >> n >> m >> i >> j;
  
  
  cout << replace_i_bits(n, m, i, j) << endl;

  return 0; 
}
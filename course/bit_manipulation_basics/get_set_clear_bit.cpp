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

int main() {
  int n, i;
  
  cin >> n >> i;

  cout << "Get ith bit = " << get_ith_bit(n, i) << endl;
  
  cout << "Clear ith bit = " << clear_ith_bit(n, i) << endl;

  cout << "set_ith_bit = " << set_ith_bit(n, i) << endl;

  return 0;
}
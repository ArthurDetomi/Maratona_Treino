#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int getIthBit(int n, int i) {
  int mask = (1 << i);
  return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int i) {
  int mask = (1 << i);
  n = (n | mask);
}

void clearIthBit(int &n, int i) {
  int mask = ~(1 << i);
  n = (n & mask);
}

void updateIthBit(int &n, int i, int v) {
  clearIthBit(n, i);
  int mask = (v << i);
  n = (n | mask);
}

int main() {
  int n, i;
  /*
  cout << "Get ithBit\n";
  cin >> n >> i;

  cout << getIthBit(n, i) << endl;

  cin >> n, i;
  setIthBit(n, i);

  cout << getIthBit(n, i) << endl;

  cout << n << endl;

  clearIthBit(n, i);
  */

  int v;
  cout << "Update ith Bit:\n";
  cin >> n >> i >> v;
  updateIthBit(n, i, v);
  cout << n << endl;
}
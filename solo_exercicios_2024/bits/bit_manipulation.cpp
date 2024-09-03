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

int main() {
  int n, i;
  cin >> n >> i;

  cout << getIthBit(n, i) << endl;

  setIthBit(n, i);

  cout << getIthBit(n, i) << endl;

  cout << n << endl;

  clearIthBit(n, i);

  cout << n << endl;
}
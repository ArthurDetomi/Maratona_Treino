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

void clearLastIBits(int &n, int i) {
  int mask = (~0) << i;
  n = n & mask;
}

void clearBitsInRange(int &n, int i, int j) {
  int a = (~0) << (j + 1);
  int b = (1 << i) - 1;
  int mask = a | b;
  n = n & mask;
}

void replaceBits(int &n, int i, int j, int m) {
  clearBitsInRange(n, i, j);
  int mask = (m << i);
  n = n | mask;
}

bool powerOfTwo(int n) {
  if ((n & (n - 1)) == 0) {
    return true;
  }
  return false;
}

int main() {
  int n, i, j, m;
  /*
  cout << "Get ithBit\n";
  cin >> n >> i;

  cout << getIthBit(n, i) << endl;

  cin >> n, i;
  setIthBit(n, i);

  cout << getIthBit(n, i) << endl;

  cout << n << endl;

  clearIthBit(n, i);


  int v;
  cout << "Update ith Bit:\n";
  cin >> n >> i >> v;
  updateIthBit(n, i, v);
  */
  /*
  int j;
  cin >> n >> i >> j;
  // clearLastIBits(n, i);
  clearBitsInRange(n, i, j);



  n = 15;
  i = 1;
  j = 3;
  m = 2;

  replaceBits(n, i, j, m);

  cin >> n;
  cout << n << endl;
  */
  cin >> n;

  if (powerOfTwo(n)) {
    cout << "Is Power of Two\n";
  } else {
    cout << "Not is power of two\n";
  }
}
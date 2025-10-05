#include <bits/stdc++.h>

using namespace std;

int n_1 = 0, n_2 = 0;

int count_bits(int n) {
  int count = 0;
  
  while (n > 0) {
    int last_bit = n & 1;
    count += last_bit;
    n_1++;
    n = n >> 1;
  }

  return count;
}

int count_bits_hack(int n) {
  int count = 0;
  
  // remove the last set bit of the current number the faster way
  while (n > 0) {
    n = n & (n - 1);
    count++;
  }

  return count;
}


int main() {
  int n;

  cin >> n;

  cout << "Count bits = " << count_bits(n) <<"number of interactions = " << n_1<< endl;
  cout << "Count bits hack and number of interactions is same = " << count_bits_hack(n) <<endl;

  return 0;
}
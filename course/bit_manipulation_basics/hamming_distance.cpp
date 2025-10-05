#include <bits/stdc++.h>

using namespace std;


int hammingDistance(int x, int y) {
  int count_diff = 0;

  for (int i = 0; i < 32; i++) {
    int last_bit1 = x & 1;
    int last_bit2 = y & 1;

    if (last_bit2 != last_bit1) {
      count_diff++;
    }

    x = x >> 1;
    y = y >> 1;
  }

  return count_diff;
}

int main() {
  int x, y;

  cin >> x >> y;

  cout << hammingDistance(x, y) << endl;

  return 0;
}

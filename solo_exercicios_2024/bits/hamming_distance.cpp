#include <bits/stdc++.h>

using namespace std;

// My solution
// O(log max(x, y));
int hammingDistance(int x, int y) {
  int max_num = max(x, y);
  int min_num = min(x, y);

  int count = 0;

  while (max_num > 0) {
    int last_bit_max_num = (max_num & 1);
    int last_bit_min_num = (min_num & 1);

    if (last_bit_max_num != last_bit_min_num) {
      count++;
    }

    max_num = max_num >> 1;
    min_num = min_num >> 1;
  }

  return count;
}

// Instructor solution
// O(qtd of bits 1 between (x ^ y))
int hammingDistanceVeryFast(int x, int y) {
  int val = x ^ y, ans = 0;

  while (val) {
    val = val & (val - 1);
    ans++;
  }

  return ans;
}

int main() {
  int x, y;

  cin >> x >> y;

  printf("hamming distance = %d\n", hammingDistance(x, y));

  return 0;
}
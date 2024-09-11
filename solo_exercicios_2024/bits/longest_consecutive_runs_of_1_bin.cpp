#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

// O(log n)
int solve(int n) {
  int bits_seq_max = 0;
  int bits_seq_sum = 0;

  while (n > 0) {
    int last_bit = (n & 1);

    if (last_bit != 0) {
      bits_seq_sum++;
    } else {
      bits_seq_max = max(bits_seq_max, bits_seq_sum);
      bits_seq_sum = 0;
    }

    n = n >> 1;
  }

  return max(bits_seq_max, bits_seq_sum);
}

int main() {
  int n;
  cin >> n;
  printf("Max seq bits = %d\n", solve(n));
  return 0;
}
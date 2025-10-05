#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int solve(int n) {
  int max_seq = 0;
  int count = 0;

  while (n > 0) {
    int last_bit = n & 1;

    if (!last_bit) {
      count = 0;
    } else {
      count++;
    }

    max_seq = max(max_seq, count);

    n = n >> 1;
  }

  return max_seq;
}

int main() {
  int n;

  cin >> n;

  cout << solve(n) << endl;

  return 0;
}
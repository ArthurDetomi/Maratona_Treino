#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int power_fn(int a, int n) { // O(n)
  if (n == 0) {
    return 1;
  }
  return a * power_fn(a, n - 1);
}

int fast_power(int a, int n) { // O(log n)
  if (n == 0) {
    return 1;
  }

  int subProb = fast_power(a, n / 2);
  int subProbSq = subProb * subProb;

  if (n & 1) {
    return a * subProbSq;
  }

  return subProbSq;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, a;
  cin >> n >> a;

  cout << power_fn(n, a) << endl;

  cout << fast_power(n, a) << endl;
  return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> a = {3, 4, 1, 2, 8};
vector<int> memo;

int lis(int i) {
  if (memo[i] != -1)
    return memo[i];

  memo[i] = 1;
  for (int j = 0; j < i; j++) {
    if (a[j] <= a[i]) {
      memo[i] = max(memo[i], lis(j) + 1);
    }
  }
  return memo[i];
}

int lis2(int n) {
  int memo2[n], lisMAX = 0;

  for (int i = 0; i < n; i++) {
    memo2[i] = 1;

    for (int j = 0; j < i; j++) {
      if (a[j] <= a[i]) {
        memo2[i] = max(memo2[i], memo2[j] + 1);
      }
      lisMAX = max(lisMAX, memo2[i]);
    }
  }
  return lisMAX;
}

int main() {
  int n = a.size();
  memo.assign(n, -1);

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, lis(i));
  }

  cout << "Comprimento da LIS: " << ans << endl;
  cout << "Comprimento da LIS: " << lis2(n) << endl;
  return 0;
}

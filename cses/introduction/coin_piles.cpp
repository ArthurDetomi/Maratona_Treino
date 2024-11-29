#include <bits/stdc++.h>

using namespace std;

bool is_divisible_by_3(int n) {
  return n % 3 == 0;
}

bool solve(int a, int b) {
  int x = 2 * b - a;
  int y = 2 * a - b;

  if (x < 0 || y < 0) {
    return false;
  }

  return is_divisible_by_3(x) && is_divisible_by_3(y);
}

int main() {
  int t, a, b;

  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &a, &b);

    string response = (solve(a, b)) ? "YES" : "NO";

    printf("%s\n", response.c_str());
  }
}
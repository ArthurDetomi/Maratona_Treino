#include <bits/stdc++.h>

using namespace std;

bool is_power_of_two(int n) {
  return (n & (n - 1)) == 0;
}

int main() {
  int n;

  cin >> n;

  cout << (is_power_of_two(n) ? "Is power of two\n" : "Not is power of two\n");

  return 0;
}
#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int number_of_ways(int n) {
  if (n == 1 || n == 2) {
    return 1;
  }

  if (n == 3) {
    return 2;
  }

  return number_of_ways(n - 1) + number_of_ways(n - 3);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  cout << number_of_ways(n) << endl;

  return 0;
}
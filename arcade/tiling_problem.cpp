#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int get_number_of_ways(int n) {
  if (n <= 3) {
    return 1;
  }

  return get_number_of_ways(n - 1) + get_number_of_ways(n - 4);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  if (n == 0) {
    cout << "No of ways" << endl;
  } else {
    cout << get_number_of_ways(n) << endl;
  }

  return 0;
}
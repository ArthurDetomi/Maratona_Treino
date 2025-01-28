#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int get_number_of_pieces(int n) {
  if (n == 1) {
    return 3;
  }

  return get_number_of_pieces(n - 1) + 2 * (n - 1) + 3;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 1; i <= 50; i++) {
    cout << ">>>>>>>>\n";
    cout << i << endl;
    cout << "========\n";
    cout << get_number_of_pieces(i) << endl;
    cout << "<<<<<<<<\n\n";
  }

  return 0;
}
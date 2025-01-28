#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

set<string> container;

void permutations(string str, int low, int high) {
  if (low == high) {
    container.insert(str);
  } else {
    for (int i = low; i <= high; i++) {
      swap(str[low], str[i]);
      permutations(str, low + 1, high);
      swap(str[low], str[i]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string str;

  cin >> str;

  int low = 0, high = str.length() - 1;

  permutations(str, low, high);

  cout << container.size() << endl;

  for (auto it = container.begin(); it != container.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}
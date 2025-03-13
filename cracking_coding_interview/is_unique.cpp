#include <bits/stdc++.h>

using namespace std;

bool is_unique(string str) {
  unordered_set<char> S;

  for (char c : str) {
    if (S.find(c) != S.end()) {
      return false;
    }

    S.insert(c);
  }

  return true;
}

bool is_unique_chars(string str) {
  int checker = 0;
  for (int i = 0; i < str.length(); i++) {
    int val = str[i] - 'a';
    if ((checker & (1 << val)) > 0) {
      return false;
    }
    checker |= (1 << val);
  }
  return true;
}

int main() {
  string str;

  cin >> str;

  if (is_unique(str)) {
    cout << "Is unique\n";
  } else {
    cout << "Not is unique\n";
  }

  return 0;
}
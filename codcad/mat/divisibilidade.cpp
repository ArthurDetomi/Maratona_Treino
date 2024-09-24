#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int charToInt(char c) { return c - '0'; }

int main() {
  string s;

  cin >> s;

  int sum = 0;
  for (char c : s) {
    sum += charToInt(c);
  }

  ((charToInt(s.back()) % 2) == 0) ? cout << "S\n" : cout << "N\n";

  ((sum % 3) == 0) ? cout << "S\n" : cout << "N\n";

  ((charToInt(s.back()) == 0) || (charToInt(s.back()) == 5)) ? cout << "S\n"
                                                             : cout << "N\n";

  return 0;
}
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

bool is_palindrome_permutation(string str) {
  unordered_map<char, int> M;

  for (char c : str) {
    if (c == ' ') {
      continue;
    }

    M[tolower(c)]++;
  }

  int count_odd = 0;

  for (auto p : M) {
    if (p.second % 2 == 1) {
      count_odd++;
    }
  }

  return count_odd <= 1;
}

int main() {
  string str;

  getline(cin, str);

  cout << (is_palindrome_permutation(str)
               ? "Is possible palindrome permutation\n"
               : "Not is possible palidrome permutation\n");

  return 0;
}
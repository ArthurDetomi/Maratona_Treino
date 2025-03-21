#include <bits/stdc++.h>
#include <cctype>

using namespace std;

// My solution
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

vector<int> build_char_frequency(string phrase) {
  vector<int> table('z' - 'a' + 1, 0);

  for (char c : phrase) {
    int x = c - 'a';

    if (x != -1) {
      table[x]++;
    }
  }

  return table;
}

bool check_max_one_odd(vector<int> table) {
  bool found_odd = false;

  for (int count : table) {
    if (count % 2 == 1) {
      if (found_odd) {
        return false;
      }
      found_odd = true;
    }
  }

  return true;
}

// Book solution
bool is_permutation_of_palidrome(string phrase) {
  vector<int> table = build_char_frequency(phrase);
  return check_max_one_odd(table);
}

int main() {
  string str;

  getline(cin, str);

  cout << (is_palindrome_permutation(str)
               ? "Is possible palindrome permutation\n"
               : "Not is possible palidrome permutation\n");

  cout << (is_permutation_of_palidrome(str)
               ? "Is possible palindrome permutation\n"
               : "Not is possible palidrome permutation\n");

  return 0;
}
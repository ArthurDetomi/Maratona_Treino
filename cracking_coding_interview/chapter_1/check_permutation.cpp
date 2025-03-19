#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Verify if s2 is permutation of s1
// Complexity O(1) space O(n log n) time
bool is_permutation(string s1, string s2) {
  if (s1.size() != s2.size()) {
    return false;
  }

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  return s1 == s2;
}

// Verify if s2 is permutation of s1 ASC2
// Complexity O(n) time O(1) space
bool is_permutation2(string s1, string s2) {
  if (s1.size() != s2.size()) {
    return false;
  }
  char arr[128];

  for (char c : s1) {
    arr[(int)c]++;
  }

  for (char c : s2) {
    arr[(int)c]--;

    if (arr[(int)c] < 0) {
      return false;
    }
  }

  return true;
}

bool is_permutation3(string s1, string s2) {
  if (s1.size() != s2.size()) {
    return false;
  }

  unordered_map<char, int> M;
  for (char c : s1) {
    M[c]++;
  }

  for (char c : s2) {
    M[c]--;

    if (M[c] < 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string s1, s2;

  cin >> s1 >> s2;

  if (is_permutation3(s1, s2)) {
    cout << "Is permutation\n";
  } else {
    cout << "Not is permutation\n";
  }

  return 0;
}
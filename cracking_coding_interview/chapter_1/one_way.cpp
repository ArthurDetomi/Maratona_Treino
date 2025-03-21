#include <bits/stdc++.h>

using namespace std;

/*
  Verify if two words one way of distance

  EXAMPLE
  pale, ple -> true
  pales, pale -> true
  pale, bale -> true
  pale, bake -> false
*/

// My solution
bool one_way(string word1, string word2) {
  if (word1 == word2) {
    return true;
  }

  int n1 = word1.length(), n2 = word2.length();

  if (max(n1, n2) - min(n1, n2) >= 2) {
    return false;
  }

  int diffs = 0;

  if (n1 == n2) {
    for (int i = 0; i < n1; i++) {
      if (word1[i] != word2[i]) {
        diffs++;
      }
    }
  } else if (n1 > n2) {
    int aux = 0;

    for (int i = 0; i < n1; i++) {
      if (word1[i] != word2[aux]) {
        diffs++;
        continue;
      }
      aux++;
    }
  } else {
    int aux = 0;

    for (int i = 0; i < n1; i++) {
      if (word2[i] != word1[aux]) {
        diffs++;
        continue;
      }
      aux++;
    }
  }

  return diffs <= 1;
}

int main() {
  string word1, word2;

  cin >> word1 >> word2;

  cout << (one_way(word1, word2) ? "True\n" : "False\n");

  cout << one_way("abcde", "abxde") << endl; // 1 (substituição única)
  cout << one_way("abc", "acb") << endl;     // 0 (duas substituições)
  cout << one_way("a", "a") << endl;         // 1 (iguais)
  cout << one_way("a", "b") << endl;         // 1 (substituição única)
  cout << one_way("ab", "abc") << endl;      // 1 (inserção única)
  cout << one_way("abc", "ab") << endl;      // 1 (remoção única)
  cout << one_way("pale", "pkle") << endl;   // 1 (substituição única)
  cout << one_way("pale", "pse")
       << endl; // 0 (duas edições: remoção e substituição)
  cout << one_way("pale", "paale") << endl; // 1 (inserção única)
  cout << one_way("pale", "pales") << endl; // 1 (inserção única)
  cout << one_way("pale", "bake") << endl;  // 0 (duas substituições)

  return 0;
}
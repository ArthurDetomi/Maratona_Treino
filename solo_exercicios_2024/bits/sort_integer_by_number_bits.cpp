#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int count_bits_hack(int n) {
  int ans = 0;

  while (n > 0) {
    n = n & (n - 1);
    ans++;
  }

  return ans;
}

bool sort_function(int n1, int n2) {
  int n1_bits_qtd = count_bits_hack(n1);
  int n2_bits_qtd = count_bits_hack(n2);

  if (n1_bits_qtd == n2_bits_qtd) {
    return n1 < n2;
  }

  return n1_bits_qtd < n2_bits_qtd;
}

vector<int> sortByBits(vector<int> arr) {
  vector<int> ans_arr(arr);
  sort(ans_arr.begin(), ans_arr.end(), sort_function);
  return ans_arr;
}

int main() {
  vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};

  vector<int> ans_arr = sortByBits(arr);

  for (int v : ans_arr) {
    cout << v << ", ";
  }
  cout << endl;

  return 0;
}
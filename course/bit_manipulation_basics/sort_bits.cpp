#include <bits/stdc++.h>

using namespace std;

int count_bits_hack(int n) {
  int count = 0;

  // remove the last set bit of the current number the faster way
  while (n > 0) {
    n = n & (n - 1);
    count++;
  }

  return count;
}

bool comp(int a1, int a2) {
  int qtd1 = count_bits_hack(a1);
  int qtd2 = count_bits_hack(a2);

  if (qtd1 == qtd2) {
    return a1 < a2;
  }

  return qtd1 < qtd2;
}

vector<int> sortByBits(vector<int> arr) {
  sort(arr.begin(), arr.end(), comp);

  return arr;
}

int main() {
  vector<int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8};

  vector<int> result = sortByBits(arr);

  for (auto v : result) {
    cout << v << " ";
  }
  cout << endl;

  return 0;
}
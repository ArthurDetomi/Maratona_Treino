#include <bits/stdc++.h>

using namespace std;

vector<int> get_two_unique_numbers(int *arr, int n) {
  int x_or = 0;

  for (int i = 0; i < n; i++) {
    x_or ^= arr[i];
  }

  int pos = 0;

  while ((x_or & 1) == 0) {
    pos++;

    x_or = x_or >> 1;
  }

  int mask = 1 << pos;
  int setA = 0, setB = 0;

  for (int i = 0; i < n; i++) {
    if ((arr[i] & mask) == 0) {
      setA ^= arr[i];
    } else {
      setB ^= arr[i];
    }
  }

  return {setA, setB};
}

int main() {
  int arr[] = {1, 1, 2, 3, 2, 3, 5, 7, 8, 8};

  int n = sizeof(arr) / sizeof(int);

  vector<int> result = get_two_unique_numbers(arr, n);

  for (auto v : result) {
    cout << v << " ";
  }
  cout << endl;

  return 0;
}
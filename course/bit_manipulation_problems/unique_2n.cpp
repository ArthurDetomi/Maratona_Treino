#include <bits/stdc++.h>

using namespace std;

int get_unique_number(int *arr, int n) {
  int x_or = 0;

  for (int i = 0; i < n; i++) {
    x_or ^= arr[i];
  }

  return x_or;
}


int main() {
  int arr[] = {1, 2, 3, 1, 2};

  int n = sizeof(arr) / sizeof(int);

  cout << get_unique_number(arr, n) << endl;

  return 0;
}
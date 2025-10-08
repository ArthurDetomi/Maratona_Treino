#include <bits/stdc++.h>

using namespace std;

void update_sum(vector<int> &sum_array, int x) {
  for (int i = 0; i < 32; i++) {
    int ith_bit = x & 1;

    sum_array[i] += ith_bit;

    x = x >> 1;
  }
}

int num_from_bits(vector<int> &sum_array) {
  int num = 0;
  for (int i = 0; i < 32; i++) {
    num += (sum_array[i] * (1 << i));
  }
  return num;
}

int get_unique_three_plus_one(int *arr, int n) {
  vector<int> sum_array(32, 0);

  for (int i = 0; i < n; i++) {
    update_sum(sum_array, arr[i]);
  }

  for (int i = 0; i < 32; i++) {
    sum_array[i] = sum_array[i] % 3;
  }

  return num_from_bits(sum_array);
}

int main() {
  int arr[] = {7, 7, 7, 6, 9, 6, 6, 2, 2, 2};

  int n = sizeof(arr) / sizeof(int);

  cout << get_unique_three_plus_one(arr, n) << endl;

  return 0;
}
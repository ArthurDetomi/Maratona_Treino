#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

bool is_sorted(int arr[], int size) {
  if (size == 0 or size == 1) {
    return true;
  }

  if (arr[0] < arr[1] && is_sorted(arr + 1, size - 1)) {
    return true;
  } else {
    return false;
  }
}

bool is_sorted_two(int arr[], int index, int size) {
  if (index == size - 1) {
    return true;
  }

  if (arr[index] < arr[index + 1] && is_sorted_two(arr, index + 1, size)) {
    return true;
  } else {
    return false;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[] = {1, 2, 3, 4, 5, 6};

  int size = (int)sizeof(arr) / sizeof(int);

  printf("%s\n", (is_sorted(arr, size)) ? "is ordened" : "is not ordened");

  printf("%s\n",
         (is_sorted_two(arr, 0, size)) ? "is ordened" : "is not ordened");

  return 0;
}
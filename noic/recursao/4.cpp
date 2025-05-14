#include <bits/stdc++.h>

using namespace std;

int sum_array(int *array, int n) {
  if (n == 1) {
    return array[0];
  }

  return array[0] + sum_array(array + 1, n - 1);
}

int main() {
  int array[] = {1, 2, 3, 4, 5};

  printf("%d\n", sum_array(array, sizeof(array) / sizeof(int)));

  // xxx
  return 0;
}
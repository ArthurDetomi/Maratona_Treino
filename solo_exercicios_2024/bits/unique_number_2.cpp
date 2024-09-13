#include <bits/stdc++.h>

using namespace std;

vector<int> getTwoUniqueNumbersFromArray(const vector<int> arr) {
  int result = 0, n = arr.size();

  for (int i = 0; i < n; i++) {
    result = result ^ arr[i];
  }

  int temp = result, pos = 0;

  while ((temp & 1) == 0) {
    pos++;

    temp = temp >> 1;
  }

  int mask = 1 << pos;

  int setA = 0, setB = 0;

  for (int value : arr) {
    if ((value & mask) > 0) {
      setA = setA ^ value;
    } else {
      setB = setB ^ value;
    }
  }

  return {setA, setB};
}

void printArray(const vector<int> arr) {
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    int value = arr[i];

    if (i != n - 1) {
      printf("%d, ", value);
    } else {
      printf("%d", value);
    }
  }
  printf("\n");
}

int main() {
  vector<int> arr = {2, 3, 4, 5, 4, 3, 7, 2, 6, 6};

  vector<int> res;

  res = getTwoUniqueNumbersFromArray(arr);

  printArray(res);

  return 0;
}
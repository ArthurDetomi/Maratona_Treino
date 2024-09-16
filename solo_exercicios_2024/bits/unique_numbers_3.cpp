#include <bits/stdc++.h>

using namespace std;

const int MAX_BITS_INT = 32;

void updateSum(vector<int> &sumArr, int value) {
  for (int i = 0; i < MAX_BITS_INT; i++) {
    int ith_bit = value & (1 << i);

    if (ith_bit) {
      sumArr[i]++;
    }
  }
}

int numFromBits(vector<int> sumArr) {
  int num = 0;

  for (int i = 0; i < MAX_BITS_INT; i++) {
    num += (sumArr[i] * (1 << i));
  }

  return num;
}

int uniqueNo3(vector<int> arr) {
  // Fill constructor array
  vector<int> sumArr(MAX_BITS_INT, 0);

  for (int value : arr) {
    updateSum(sumArr, value);
  }

  for (int i = 0; i < MAX_BITS_INT; i++) {
    sumArr[i] = sumArr[i] % 3;
  }

  return numFromBits(sumArr);
}

int main() {
  vector<int> arr = {5, 2, 5, 3, 5, 2, 2};

  printf("Response: %d\n", uniqueNo3(arr));

  return 0;
}
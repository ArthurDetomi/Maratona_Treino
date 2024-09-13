#include <bits/stdc++.h>

using namespace std;

int getUniqueNumberFromArray(const vector<int> arr) {
  const int N = arr.size();

  int unique_number = 0;

  for (int i = 0; i < N; i++) {
    unique_number = unique_number ^ arr[i];
  }

  return unique_number;
}

int main() {
  vector<int> arr = {3, 5, 6, 1, 5, 6, 3};

  printf("resposta = %d\n", getUniqueNumberFromArray(arr));

  return 0;
}

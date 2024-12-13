#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {

  int N;

  while (cin >> N) {
    int arr[N];

    for (int i = 0; i < N; i++) {
      scanf("%d", &arr[i]);
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++) {
      printf("%04d\n", arr[i]);
    }
  }

  return 0;
}
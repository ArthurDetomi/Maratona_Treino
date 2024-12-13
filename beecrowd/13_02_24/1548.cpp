#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
  int N, M;

  cin >> N;

  while (N--) {
    cin >> M;

    int arr_original[M], arr_orde[M];

    for (int i = 0; i < M; i++) {
      cin >> arr_original[i];

      arr_orde[i] = arr_original[i];
    }

    sort(arr_orde, arr_orde + M, std::greater<int>());

    int result = 0;

    for (int i = 0; i < M; i++) {
      if (arr_orde[i] == arr_original[i]) {
        result++;
      }
    }

    cout << result << endl;
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
  int arr[n];

  arr[0] = 1;

  queue<int> fila;

  for (int i = 2; i <= n; i++) {
    fila.push(i);
  }

  int pos = 1, last_pos = n - 1;
  while (!fila.empty()) {
    int current_front = fila.front();

    int diff = current_front - arr[pos - 1];

    if (diff == 1) {
      arr[last_pos] = current_front;
      fila.pop();

      last_pos--;

      if (fila.empty()) {
        break;
      }
    }

    arr[pos] = fila.front();
    fila.pop();

    pos++;
  }

  int first_value = arr[0];

  int mid_pos;

  if (n % 2 != 0) {
    mid_pos = n / 2;
  } else {
    mid_pos = (n / 2) - 1;
  }

  int mid_value = arr[mid_pos];

  arr[0] = mid_value;
  arr[mid_pos] = first_value;

  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << '\n';
}

int main() {
  int n;

  cin >> n;

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION\n";
  } else {
    solve(n);
  }

  return 0;
}
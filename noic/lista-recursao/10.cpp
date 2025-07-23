#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

bool find(int *arr, int n, const int v) {
  if (n == 0) {
    return false;
  }

  return (arr[n - 1] == v) ? 1 : find(arr, n - 1, v);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[5] = {2, 4, 7, 10, 11};

  int n;

  cin >> n;

  bool found = find(arr, 5, n);

  if (found) {
    cout << "Encontrou\n";
  } else {
    cout << "Não encontrou\n";
  }

  return 0;
}
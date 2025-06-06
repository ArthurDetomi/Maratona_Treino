#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int camelos[n], sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> camelos[i];

    sum += camelos[i];
  }

  int dist = sum / n;

  for (int i = 0; i < n; i++) {
    cout << dist - camelos[i] << endl;
  }

  return 0;
}
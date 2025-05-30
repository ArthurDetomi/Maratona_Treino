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

  int l, c;

  cin >> l;
  cin >> c;

  int response;

  if (l % 2 == 0) {
    if (c % 2 == 0) {
      response = 1;
    } else {
      response = 0;
    }
  } else {
    if (c % 2 == 0) {
      response = 0;
    } else {
      response = 1;
    }
  }

  cout << response << endl;

  return 0;
}
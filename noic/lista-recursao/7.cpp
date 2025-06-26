#include <bits/stdc++.h>
#include <string>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

string cvt_to_binary(int n) {
  if (n < 2) {
    return to_string(n);
  }

  return cvt_to_binary(n / 2) + to_string(n % 2);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  cout << cvt_to_binary(n) << endl;

  return 0;
}
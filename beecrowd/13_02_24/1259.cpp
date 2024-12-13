#include <algorithm>
#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

struct ReverseOrder {
  bool operator()(int a, int b) const { return a > b; }
};

void print_vector(const vector<int> v) {
  for (int i = 0; i < (int)v.size(); i++) {
    cout << v[i] << endl;
  }
}

int main() {
  vector<int> impares;
  vector<int> pares;

  int N, num_input;

  cin >> N;

  while (N--) {
    cin >> num_input;

    if (num_input % 2 == 0) {
      pares.push_back(num_input);
    } else {
      impares.push_back(num_input);
    }
  }

  sort(pares.begin(), pares.end());
  sort(impares.rbegin(), impares.rend());

  print_vector(pares);
  print_vector(impares);

  return 0;
}
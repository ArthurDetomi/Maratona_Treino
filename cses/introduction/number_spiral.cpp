#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define ll long long

// Function to compute the value at position (Y, X) in the
// number spiral
void NumberSpiral(ll Y, ll X) {
  // If Y is greater than X, implying Yth row is the outer
  // boundary
  if (Y > X) {
    // Compute the area of the inner square
    ll ans = (Y - 1) * (Y - 1);
    ll add = 0;

    // Check parity of Y to determine if numbers are in
    // increasing or decreasing order
    if (Y % 2 != 0) {
      // Add X to the area if Yth row is odd
      add = X;
    } else {
      // Add 2*Y - X to the area if Yth row is even
      add = 2 * Y - X;
    }
    // Print the final result
    cout << ans + add << "\n";
  }
  // If X is greater than or equal to Y, implying Xth
  // column is the outer boundary
  else {

    // Compute the area of the inner square
    ll ans = (X - 1) * (X - 1);
    ll add = 0;

    // Check parity of X to determine if numbers are in
    // increasing or decreasing order
    if (X % 2 == 0) {
      // Add Y to the area if Xth column is even
      add = Y;
    } else {
      // Add 2*X - Y to the area if Xth column is odd
      add = 2 * X - Y;
    }
    // Print the final result
    cout << ans + add << "\n";
  }
}

int main() {
  long long t;

  cin >> t;

  while (t--) {
    long long x, y;

    cin >> y >> x;

    NumberSpiral(y, x);
  }

  return 0;
}
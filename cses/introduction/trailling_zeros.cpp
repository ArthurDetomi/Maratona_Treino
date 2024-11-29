#include <bits/stdc++.h>
#include <cstdio>
#include <string>

#define endl '\n'

using namespace std;

#define ll long long 

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)


#define MOD 1000000007

ll solve(int N) {
  if (N == 0) {
    return 0;
  }
  return N / 5 + solve(N / 5);
}


int main() {
  fastio;
  
  ll n;

  scanf("%lld", &n);

  printf("%lld\n", solve(n));
  
  return 0;
}
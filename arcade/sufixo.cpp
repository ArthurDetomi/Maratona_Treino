#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

void count_down(int n) {
  // Base case
  if (n == 0) {
    return;
  }

  printf("%d\n", n);

  count_down(n - 1);

  printf("%d\n", n);
}

void printTower(const char *s) {
  if (*s == '\0') {
    return;
  }

  printf("%s\n", s);

  printTower(s + 1);
}

void print_tower_sol(const char *s) {
  if (*s == '\0') {
    return;
  }

  print_tower_sol(s + 1);

  printf("%s\n", s);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  count_down(5);

  string a = "wladimir";
  printTower(a.c_str());

  print_tower_sol(a.c_str());

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define pii pair<int, int>

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int a_inf_esq_x, a_inf_esq_y, a_sup_dir_x, a_sup_dir_y;
  int b_inf_esq_x, b_inf_esq_y, b_sup_dir_x, b_sup_dir_y;

  scanf("%d %d %d %d", &a_inf_esq_x, &a_inf_esq_y, &a_sup_dir_x, &a_sup_dir_y);
  scanf("%d %d %d %d", &b_inf_esq_x, &b_inf_esq_y, &b_sup_dir_x, &b_sup_dir_y);

  if (a_sup_dir_x < b_inf_esq_x || a_sup_dir_y < b_inf_esq_y ||
      b_sup_dir_x < a_inf_esq_x || b_sup_dir_y < a_inf_esq_y)
    printf("0\n");
  else
    printf("1\n");

  return 0;
}
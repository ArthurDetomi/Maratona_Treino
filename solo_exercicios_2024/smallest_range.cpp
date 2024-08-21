#include <bits/stdc++.h>
using namespace std;

vector<int> smallestRange(vector<vector<int>> nums) {
  vector<pair<int, int>> vec;

  for (int i = 0; i < (int)nums.size(); i++) {
    for (int itr : nums[i]) {
      vec.push_back({itr, i});
    }
  }

  sort(vec.begin(), vec.end());

  //  Percorro a lista que está junto e ordenado

  int qtd_lists = nums.size();
  vector<int> res;
  
  for (int i = 0; i < (int)vec.size() && (int)vec.size() - i >= qtd_lists;i++) {
    unordered_set<int> S;

    int first_position = i;
    int last_position = i + (qtd_lists - 1);

    int count = first_position;
    for (int j = 0; j < qtd_lists; j++) {
      S.insert(vec[count].second);
      count++;
    }

    if ((int)S.size() == qtd_lists) {
      cout << vec[first_position].first << " "<< vec[last_position].first << "\n";
      if (res.empty()) {
        res = {vec[first_position].first, vec[last_position].first};
        //cout << res[0] << " " << res[1] << '\n';
        continue;
      }

      int small_range = res[1] - res[0];
      int current_small_range =
          vec[last_position].first - vec[first_position].first;

      if (current_small_range < small_range) {
        res = {vec[first_position].first, vec[last_position].first};
      }
    }
  }

  return res;
}

int main() {
  vector<vector<int>> input = {
      {4, 10, 15, 24, 26}, {0, 9, 12, 20}, {5, 18, 22, 30}};

  vector<int> response = smallestRange(input);

  cout << "resposta:\n";
  for (auto v : response) {
    cout << v << " ";
  }
  cout << '\n';
}
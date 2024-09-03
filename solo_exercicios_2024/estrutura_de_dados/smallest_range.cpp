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

  vector<int> res;
  unordered_map<int, int> count_map;

  int left = 0, right = 0;
  while (right < (int)vec.size()) {
    count_map[vec[right].second]++;

    while (count_map.size() == nums.size()) {
      if (res.empty() || vec[right].first - vec[left].first < res[1] - res[0]) {
        res = { vec[left].first, vec[right].first };
      }

      count_map[vec[left].second]--;

      if (count_map[vec[left].second] == 0) {
        count_map.erase(vec[left].second);
      }

      left++;
    }

    right++;
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
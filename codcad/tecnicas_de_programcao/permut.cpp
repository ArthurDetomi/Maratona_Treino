#include <bits/stdc++.h>

using namespace std;

void permut(const vector<int> &nums, vector<int> &currentValue, vector<bool> &visited) {
    if (currentValue.size() == 3) {
        for (auto v : currentValue) {
            printf("%d ", v);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= 3; i++) {
        if (!visited[i]) {
            visited[i] = true;
            currentValue.push_back(i);
            permut(nums, currentValue, visited);
            visited[i] = false;
            currentValue.pop_back();
        }
    }
}   

int main(void) {
    vector<int> nums = {0, 1, 2, 3};
    vector<bool> visited(4, false);
    vector<int> currentVector;
    permut(nums, currentVector, visited);
    return 0;
}
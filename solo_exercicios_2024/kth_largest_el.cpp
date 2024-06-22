#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> nums, int k) {
    sort(nums.rbegin(), nums.rend());
    return nums[k - 1];
}

int main() {
    vector<int> arr = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    cout << findKthLargest(arr, 4) << "\n";
    return 0;
}
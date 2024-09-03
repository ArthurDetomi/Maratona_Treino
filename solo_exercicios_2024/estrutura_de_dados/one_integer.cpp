#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, std::vector<int>, std::greater<int>> pq(nums.begin(),
                                                                nums.end());
    int somas_total = 0;
    while (pq.size() >= 2) {
        int min_value_one = pq.top();
        pq.pop();
        int min_value_two = pq.top();
        pq.pop();

        int soma = min_value_one + min_value_two;

        somas_total += soma;
        pq.push(soma);
    }

    return somas_total;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << solve(arr) << endl;
    return 0;
}
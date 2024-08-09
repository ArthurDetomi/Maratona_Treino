#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int distributeCandies(vector<int> candies) {
    set<int> container(candies.begin(), candies.end());
    return (int)min(container.size(), candies.size() / 2);
}

int main() {
    vector<int> input = {1, 1, 2, 2, 3, 3};
    cout << distributeCandies(input) << endl;
}

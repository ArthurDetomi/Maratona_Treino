#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    const int tam = 10;
    vector<int> nums(tam, 0);

    while (n--) {
        string value;
        cin >> value;
        for (char c : value) {
            nums[c - '0'] += 1;
        }
    }

    for (int i = 0; i < tam; i++) {
        printf("%d - %d\n", i, nums[i]);
    }

    return 0;
}

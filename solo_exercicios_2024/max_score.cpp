#include <bits/stdc++.h>

using namespace std;

int maximumScore(int a, int b, int c) {
    array<int, 3> arr = {a, b, c};

    int points = 0;
    int min_pos = 0;
    int max_pos = 2;

    while (true) {
        sort(arr.begin(), arr.end());

        arr[min_pos]--;
        arr[max_pos]--;

        points++;

        if (arr[min_pos] == 0) {
            if (min_pos == 0) {
                min_pos++;
            } else {
                break;
            }
        }
    }

    return points;
}

int main() {
    int a = 2, b = 4, c = 6;
    cout << maximumScore(a, b, c) << "\n";
    return 0;
}
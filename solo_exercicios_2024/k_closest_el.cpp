#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define mp make_pair
#define pii pair<int, int>

vector<int> findClosestElements(vector<int> arr, int k, int x) {
    vector<pii> arr_aux;

    for (auto value : arr) {
        arr_aux.push_back(mp(abs(x - value), value));
    }

    sort(arr_aux.begin(), arr_aux.end());

    vector<int> closest_values;
    for (int i = 0; i < k; i++) {
        closest_values.push_back(arr_aux[i].second);
    }

    sort(closest_values.begin(), closest_values.end());

    return closest_values;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4, x = 3;
    vector<int> result = findClosestElements(arr, k, x);

    for (auto v : result) {
        cout << v << ", ";
    }
    cout << endl;

    return 0;
}
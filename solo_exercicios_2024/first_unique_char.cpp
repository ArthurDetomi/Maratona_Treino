#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, bool> map;
    for (char c : s) {
        if (map[c]) {
            map[c] = false;
        } else {
            map[c] = true;
        }
    }

    for (int i = 0; i < (int)s.length(); i++) {
        if (map[s[i]]) {
            return i;
        }
    }

    return -1;
}

int main() {
    string input;
    cin >> input;
    cout << firstUniqChar(input) << "\n";
    return 0;
}
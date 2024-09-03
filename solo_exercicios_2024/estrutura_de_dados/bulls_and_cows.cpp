#include <bits/stdc++.h>
using namespace std;

#define endl '\n';

string getHint(string secret, string guess) {
    unordered_map<char, int> map;

    // Inicializo o meu Map
    for (char c : secret) {
        if (map[c]) {
            map[c]++;
        } else {
            map[c] = 1;
        }
    }

    int touro = 0, vaca = 0;
    for (int i = 0; i < (int)secret.size(); i++) {
        // é um touro entt somo
        if (secret[i] == guess[i]) {
            touro++;
            map[secret[i]]--;
        } else if (map[guess[i]] && map[guess[i]] > 0) {
            vaca++;
            map[guess[i]]--;
        }
    }

    return to_string(touro) + "A" + to_string(vaca) + "B";
}

int main() {
    string secret = "0010", guess = "1234";
    cout << getHint(secret, guess) << endl;
    return 0;
}
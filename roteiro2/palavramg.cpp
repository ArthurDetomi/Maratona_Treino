#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        const int TAM = word.size();

        // Complexidade de espaço foi para O(n)
        string copy = word;
        for (int i = 0; i < TAM; i++) {
            copy[i] = tolower(copy[i]);
        }

        sort(copy.begin(), copy.end());

        bool is_ordened = true;
        unordered_map<char, bool> dic(TAM);
        for (int i = 0; i < TAM; i++) {
            if (tolower(word[i]) != copy[i] || dic[copy[i]]) {
                is_ordened = false;
                break;
            }
            dic[copy[i]] = true;
        }

        // Complexidade de tempo final O(n) + (O(n log n) sort)
        (is_ordened == true) ? printf("%s: O\n", word.c_str())
                             : printf("%s: N\n", word.c_str());
    }

    return 0;
}
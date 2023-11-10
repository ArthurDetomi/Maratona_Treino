#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define debug printf

using namespace std;

int t;

int a, b, c;

int get_first_element(const set<int> &container) {
    return *container.begin();
}

int get_last_element(const set<int> &container) {
    return *container.rbegin();
}

int main() {
    fastio;

    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        set<int> container;
        
        container.insert(a);
        container.insert(b);
        container.insert(c);

        bool is_possible = false;

        for (int i = 0; i < 3; i++) {
            if (container.size() == 1) {
                is_possible = true;
                break;
            }

            int lower_value = get_first_element(container);

            int upper_value = get_last_element(container);

            int remainder = upper_value - lower_value;

            container.insert(remainder);
            container.erase(upper_value);
        }

        cout << ((is_possible) ? "Yes\n" : "No\n");
    }

    return 0;
}
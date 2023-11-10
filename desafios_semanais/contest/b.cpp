#include <bits/stdc++.h>

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define debug printf

using namespace std;

int n;

deque<int> get_cards(int size) {
    deque<int> cards;
    for (int i = 1; i <= size; i++) {
        cards.push_back(i);
    }
    return cards;
}

int main() {
    fastio;

    while (true) {
        cin >> n;
        
        if (n == 0) break;

        deque<int> cards = get_cards(n);

        vector<int> discard_sequence;

        while (cards.size() >= 2) {
            int discard_card = cards.front();
            cards.pop_front();

            discard_sequence.push_back(discard_card);

            int next_card = cards.front();
            cards.pop_front();
            cards.push_back(next_card);
        }

        cout << "Discarded cards: ";
        for (int i = 0; i < (int) discard_sequence.size(); i++) {
            if (i != discard_sequence.size() - 1) {
                cout << discard_sequence[i] << " ,";
            } else {
                cout << " " << discard_sequence[i];
            }
        }
        cout << endl;

        cout << "Remaining card: ";
        cout << cards.front() << endl;
    }

    return 0;
}
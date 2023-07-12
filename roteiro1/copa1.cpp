#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define endl '\n'

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define MAXJ 15

void inicia_times(queue<char> &times) {
    char c = 'A';
    while (c != 'Q') {
        times.push(c);
        c++;
    }
}

int main(void) {
    queue<char> times;

    inicia_times(times);

    int a, b;
    for (int i = 0; i < MAXJ; i++) {
        cin >> a >> b;

        char t1 = times.front();
        times.pop();
        char t2 = times.front();
        times.pop();

        if (a > b) {
            times.push(t1);
        } else {
            times.push(t2);
        }
    }

    cout << times.front() << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

map<int, int> cache;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n < 2) {
        return 1;
    }
    if (cache[n]) {
        return cache[n];
    }

    int result = fib(n - 1) + fib(n - 2);

    cache[n] = result;

    return result;
} // O(n)

int N;

int main() {
    fastio;

    cin >> N;

    cout << fib(N) << endl;

    return 0;
}
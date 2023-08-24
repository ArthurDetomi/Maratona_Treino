#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> cache;

int fib(int num) {
    if (cache.find(num) != cache.end()) {
        return cache[num];
    } 
    if (num == 1 || num == 2) {
        return 1;
    }

    int result = fib(num - 1) + fib(num - 2);
    cache[num] = result;
    return result;
}

int N;

int main(void) {
    scanf("%d", &N);
    printf("%d\n", fib(N));
    return 0;
}
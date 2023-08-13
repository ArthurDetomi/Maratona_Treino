#include <bits/stdc++.h>

using namespace std;

void helper(int index, string str);

static void print_inverse(string str);

int main(void) {
    string str = "ArthurDetomi";
    ::print_inverse(str);
}

static void print_inverse(string str) {
    helper(0, str);
}

void  helper(int index, string str) {
    if (index >= str.size()) {
        return;
    }
    helper(index + 1, str);
    printf("%c", str[index]);
    if (index == 0) {
        printf("\n");
    }
}
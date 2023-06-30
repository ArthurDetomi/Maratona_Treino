#include <iostream>

using namespace std;

int main(void) {
    float x, y;
    cin >> x >> y;
    if (x > 0.0) {
        if (y > 0.0) {
            cout << "Q1\n";
        } else if (y < 0.0) {
            cout << "Q4\n";
        } else {
            cout << "Eixo X\n";
        }
    } else if (x < 0.0) {
        if (y > 0.0) {
            cout << "Q2\n";
        } else if (y < 0.0) {
            cout << "Q3\n";
        } else {
            cout << "Eixo X\n";
        }
    } else {
        if (y != 0.0) {
            cout << "Eixo Y\n";
        } else {
            cout << "Origem\n";
        }
    }
}
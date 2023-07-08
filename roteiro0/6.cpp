#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long num;

    cin >> num;
    if (num < 0) {
        num *= -1;
    }

    if (num <= 1) {
        cout << "nao" << endl;
        return 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                cout << "nao" << endl;
                return 0;
            }
        }
    }
    cout << "sim" << endl;
    return 0;
}

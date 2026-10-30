#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int number = 2; number <= n; number++) {
        bool isPrime = true;

        for (int divisor = 2; divisor <= number / divisor; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    cout << '\n';
    return 0;
}
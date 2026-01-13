#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (gcd(a, b) == 1)
        cout << "The numbers are Co-prime";
    else
        cout << "The numbers are NOT Co-prime";

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a; 
    int reverse = 0;

    cout << "Enter a Number: ";
    cin >> a;

    while (a != 0) {
        int digit = a % 10;               // To Get the last digit
        reverse = reverse * 10 + digit;   // Build reversed number
        a = a / 10;                       // To Remove last digit
    }

    cout << "Reversed number: " << reverse;

    return 0;
}

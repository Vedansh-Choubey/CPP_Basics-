#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cin >> n;

    original = n;

    while(n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(original == rev)
        cout << "Number is Palindrome";
    else
        cout << "Number is Not Palindrome";

    return 0;
}

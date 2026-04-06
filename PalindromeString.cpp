#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = true;

    for(int i = 0; i < str.length()/2; i++) {
        if(str[i] != str[str.length()-i-1) {
            isPalindrome = false
            break;
        }
    }

    if(isPalindrome)
        cout << "Entered string is Palindrome";
    else
        cout << "Entered String is Not Palindrome";

    return 0;
}

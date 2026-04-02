#include <iostream>
using namespace std;

int main() {
    int num,sum;

    cout << "Code to Find The Sum of Digits of Any Number "<<endl;
    cout << "Enter Any Number: ";
    cin >> num;

    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits = " << sum;
    return 0;
}

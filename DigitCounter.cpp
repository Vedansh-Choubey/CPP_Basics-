#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout <<"Enter Any Number: ";
    cin >> n;

    if(n == 0) {
        count = 1;
    } else {
        while(n != 0) {
            n = n / 10;
            count++;
        }
    }

    cout << "Total Digits in Number = " << count;
    return 0;
}

// Program to find prime numbers in a given range
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter the start and end of the range: ";
    cin >> start >> end;

    cout << "Prime numbers in the range "<<start<<" and "<<end<<" are: ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

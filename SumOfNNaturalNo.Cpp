#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {  //simple loop starting from and going till 'n' value
        sum += i;
    }

    cout << "Sum of Starting " << n << " natural numbers is: " << sum;

    return 0;
}

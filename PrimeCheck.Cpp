#include <iostream>
using namespace std;

int main() {
    int a, i;
    cout << "Enter the Number: ";
    cin >> a;

    if (a <= 1) {
        cout << "The Number: " << a << " is not a Prime Number!" << endl;
        return 0;
    }
    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            cout << "The Number: " << a << " is not a Prime Number!" << endl;
            return 0;
        }
    }

                     // If loop completes, no divider found
    cout << "The Number: " << a << " is a Prime Number." << endl;

    return 0;
}

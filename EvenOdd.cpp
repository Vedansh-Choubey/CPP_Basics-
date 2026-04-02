#include <iostream>
using namespace std;

int main() {
    int num;

    cout <<"Program To Check Even Odd Numbers "<<endl;
    cout << "Enter a Number: ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}

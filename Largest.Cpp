#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 1st number ";      //Taking Input One By One 
    cin >> a ;
    cout << "Enter 2nd number ";
    cin >> b ;
    cout << "Enter 3rd number ";
    cin >> c ;
    if (a >= b && a >= c)
        cout << "Largest: " << a;
    else if (b >= a && b >= c)
        cout << "Largest: " << b;
    else
        cout << "Largest: " << c;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
//    cout << "Enter 1st Number ";      //Taking Input One By One 
//    cin >> a ;                        //Storing In variable One By One 
//    cout << "Enter 2nd Number ";
//    cin >> b ;
//    cout << "Enter 3rd Number ";
//    cin >> c ;

  
    cout << "Enter Three Number: ";     //Taking Entire Input in One 
    cin >>a>>b>>c;                      //Storing In variable 
   
    if (a >= b && a >= c)
        cout << "Largest: " << a;
    else if (b >= a && b >= c)
        cout << "Largest: " << b;
    else
        cout << "Largest: " << c;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter Any Year: ";
    cin >> year;

//    if (year % 400 == 0) {                   // One By One Conditions  
//        cout << year << " is a Leap Year";
//    } 
//    else if (year % 100 == 0) {
//        cout << year << " is not a Leap Year";
//    } 
//    else if (year % 4 == 0) {
//        cout << year << " is a Leap Year";
//    } 
//    else {
//        cout << year << " is not a Leap Year";
//    }

//    return 0;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){   // All Conditions at once 
        cout<< year<<" is a Leap Year !!";
        
    }else {
        cout<< year<<" is Not a Leap Year !!";
    }
}

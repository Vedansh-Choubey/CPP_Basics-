#include <iostream>
using namespace std;

int main() {
    int age, birthYear;

//    cout << "Enter your age: ";
//    cin >> age;

//    birthYear = 2026 - age;      //inaccurate If Bday had not happend in this year yet

//    cout << "Your birth year is: " << birthYear << endl;
    
//    return 0;
//}


    char hadBirthday;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Have you had your birthday this year? (Y/ N): ";
    cin >> hadBirthday;

    if (hadBirthday == 'y' || hadBirthday == 'Y'|| hadBirthday == 'Yes'|| hadBirthday == 'YES') {
        birthYear = 2026 - age;
    } else {
        birthYear = 2026 - age - 1;
    }

    cout << "Your birth year is: " << birthYear << endl;

    return 0;
}

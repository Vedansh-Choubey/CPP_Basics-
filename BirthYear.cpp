#include <iostream>
using namespace std;

int main() {
    int age, birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Your birth year is: " << birthYear << endl;
    
    return 0;
}

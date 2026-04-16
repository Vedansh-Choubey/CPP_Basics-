#include <iostream>
using namespace std;

/*int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:"<<endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;

    if (choice == 1)
        cout << "Result: " << a + b;
    else if (choice == 2)
        cout << "Result: " << a - b;
    else if (choice == 3)
        cout << "Result: " << a * b;
    else if (choice == 4) {
        if (b != 0)
            cout << "Result: " << a / b;
        else
            cout << "Cannot divide by zero";
    }
    else
        cout << "Invalid choice";

    return 0;*/

// Functions for operations.          //Menu Based Calculator 
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "\nOops! You can't divide by zero.\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2;

    cout << "Welcome to your simple calculator!\n";

    do {
        cout << "\nWhat would you like to do?\n";
        cout << "1. Add numbers\n";
        cout << "2. Subtract numbers\n";
        cout << "3. Multiply numbers\n";
        cout << "4. Divide numbers\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        

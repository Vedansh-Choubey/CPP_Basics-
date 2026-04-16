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

// Functions
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
        cout << "Error: Cannot divide by zero!\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n  ●MENU \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << add(num1, num2);
                break;

            case 2:
                cout << "Result = " << subtract(num1, num2);
                break;

            case 3:
                cout << "Result = " << multiply(num1, num2);
                break;

            case 4:
                cout << "Result = " << divide(num1, num2);
                break;

            case 5:
                cout << "Program exited.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

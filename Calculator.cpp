#include <iostream>
using namespace std;

int main() {
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

    return 0;
}

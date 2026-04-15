#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int accNo;
    double balance;

    void create() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = amount;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance)
            cout << "Insufficient Balance\n";
        else
            balance -= amount;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.create();

    int choice;

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Display4\n.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.display();
                break;
            case 4:
                cout << "Thank You\n";
                break;
            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}

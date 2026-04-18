#include <iostream>
using namespace std;

/*class BankAccount {
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
        balance += amount;
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
}*/

class BankAccount (){
    private:
    string name; int accNo; int pin; double balance;

    void create (){
        cout <<"Enter Name: ";
        ignore cin();
        getline (cin, name);

        cout <<"Account Number: ";  
        cin >>accNo;

      
        cout <<" Set a Four Digit pin: ";
        cin>>pin;

        cout <<" Neter Initial Balance: ";
        cin >>balance;

        if (balance<0){
            cout <<" Balance Can't Be Negative So Setting it to Zero ";
            balance = 0;
        }
    }

     bool VerifyPin (){
         int enteredPin;
         cout <<" Enter a Pin: ";
         cin >>enteredPin;

        if (enteredPin == pin){
             return true;
        }else{
              cout <<" Entered Pin is Incorrect !!";
             return flse;
        }
     }

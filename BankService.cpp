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

class BankAccount{                                   // Updated With Pin function 
    private:
    string name; int accNo; int pin; double balance;
    public:
    void create (){
        cout <<"Enter Name: ";
        cin.ignore();
        getline (cin, name);

        cout <<"Account Number: ";  
        cin >>accNo;

      
        cout <<"Set a Four Digit pin: ";
        cin>>pin;

        cout <<"Enter Initial Balance: ";
        cin >>balance;

        if (balance<0){
            cout <<"Balance Can't Be Negative So Setting it to Zero ";
            balance = 0;
        }
    }

     bool verifyPin (){
         int enteredPin;
         cout <<"Enter a Pin: ";
         cin >>enteredPin;

        if (enteredPin == pin){
             return true;
        }else{
              cout <<" Entered Pin is Incorrect !!";
             return false;
        }
     }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
 
        if (amount <= 0) {
            cout << "Invalid amount Entered!"<<endl;
            return;
        }
       
        balance += amount;
        cout << "Deposit successfull!"<<endl;
    }
    
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }

        if (amount > balance)
            cout << "Insufficient Balance!\n";
        else {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
    }
    void display() {
        cout <<"\n-- Account Details --\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount b;
    b.create();

    int choice;
    do {

        cout<<"\n_____MENU_____\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (b.verifyPin())
                    b.deposit();
                break;
            case 2:
                if (b.verifyPin())
                    b.withdraw();
                break;
            case 3:
                if (b.verifyPin())
                    b.display();
                break;
            case 4:
                cout << "Thank You!\n";
                break;

         default:
                cout << "Invalid choice! Try again.\n";
        }
} while (choice != 4);

    return 0;
}


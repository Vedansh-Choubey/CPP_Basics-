#include <iostream>
using namespace std;

class Student {
    public:
    int age;    
    Student() {       // Constructor
        age = 20;
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};
 
int main() {
    Student s;   // constructor automatically runs

    s.display();

    return 0;
}

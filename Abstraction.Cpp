#include <iostream>
using namespace std;
class Animal {                 // Abstract class
public:
    virtual void sound() = 0;  // pure virtual function
};
class Dog : public Animal {    // Derived class
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
}

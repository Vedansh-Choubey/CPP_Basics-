          //Single Inheritance 

//#include <iostream>
//using namespace std;
//class Animal {
//public:
//    void eat() {
//        cout << "Animal can eat" << endl;
//    }
//};

//class Dog : public Animal {
//public:
//    void bark() {
//        cout << "Dog can bark" << endl;
//    }
//};

//int main() {
//    Dog d;
//    d.eat();
//    d.bark();
//}


         //MultiLevel Internship 
#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "Animal can eat" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog can bark" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy can weep" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
}

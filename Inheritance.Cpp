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

//class Puppy : public Dog {
//public:
//    void weep() {
//        cout << "Puppy can weep" << endl;
//    }
//};

//int main() {
//    Puppy p;
//    p.eat();
//    p.bark();
//    p.weep();
//}


          //Multiple Inheritance 
//#include <iostream>
//using namespace std;

//class Father {
//public:
//    void skill1() {
//        cout << "Intelligence from father" << endl;
//    }
//};

//class Mother {
//public:
//    void skill2() {
//        cout << "Nature from mother" << endl;
//    }
//};

//class Child : public Father, public Mother {
//void skill() {
//        cout << "His Personal Quality " << endl;
//};

//int main() {
//    Child c;
//    c.skill();
//    c.skill1();
//    c.skill2();
//}


            //Hierarchical Inheritance 
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.eat();
    d.bark();

    c.eat();
    c.meow();

         //c.bark();       Invalid Operation 
         //d.meow();       Invalid Operation 
}

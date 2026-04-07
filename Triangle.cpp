#include <iostream>
#include <cmath>
using namespace std;

int main() {
//  float area;
    float Base, Height, Hypotenuse;
  

    cout << "Enter base of the triangle: ";       
    cin >> Base;

    cout << "Enter height of the triangle: ";
    cin >> Height;

//    area = (Base * Height) / 2;

//    cout << "Area of triangle = " << area;
//    return 0;
    Hypotenuse = sqrt(Base*Base + Height*Height);      //if Base and Height are Given!!

    cout<<"Hypotenuse of the Tringle will be: "<<Hypotenuse<<endl;
    return 0;
}


    

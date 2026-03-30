#include <iostream>
using namespace std;
int main (){
  double a, b, ar, peri;
  cout<<"Enter Side 'A' of Ractangle: ";
  cin>>a;
  cout<<"Enter Side 'B' of Ractangle: ";
  cin>>b;
  ar= a*b;
  peri= 2* (a+b);
  cout<<"Area of the Ractangle with sides "<<a<<" and "<<b<<" is: "<<ar<<endl;
  cout<<"and Perimeter of the Ractangle is: "<<peri;
}


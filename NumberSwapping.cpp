#include <iostream>
using namespace std;

int main() {
    int a, b;
  //  int temp;
    cout << "Enter Value of a: ";
    cin>>a;
    cout << "Enter Value of b: ";
    cin>>b;    
//    temp = a;              //using Temp Variable 
//    a = b;
//    b = temp;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "After Swapping Values:"<<endl;
    cout <<"a = " << a <<endl;
    cout <<"b = " << b <<endl;

    return 0;
}

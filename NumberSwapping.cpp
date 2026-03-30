#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping Values:"<<endl;
    cout << "a = " << a <<endl;
    cout <<" b = " << b <<endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Program To Print Table of Any Number"<<endl;
    cout << "Enter number: ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string str;  
    string reverse = "";
    cout <<"Enter Any String: ";
    cin>>str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }

    cout << "Reversed String Will Be: " << reverse;

    return 0;
}

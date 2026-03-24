#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter Any String: ";
    cin>>str;
//    int count = 0;

//    for (int i = 0; str[i] != '\0'; i++) {   // Using Loop
//        count++;
//    }

//    cout << "Length: " << count;

//    return 0;

    
    cout << "Length: " << str.length();    // Using Length Function 
    
    return 0;
}
}

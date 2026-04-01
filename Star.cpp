#include <iostream>
using namespace std;

int main() {
    int n = 5;
    cout <<"Printing Simple n×n Square "<<endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

//    return 0;
 cout << endl;
 cout <<"Printing Right Triangle "<<endl;
 cout << endl;

    for (int i = 1; i <=n;  i++){
         for (int j = 1; j <= i; j++){
             cout <<"* ";
         }
       cout<<endl;
}
    cout <<endl;
    cout <<"Printing Inverted Right Tringle "<<endl;
    cout <<endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n -i +1 ; j++){     //n - i starts with 5 - 1 = 4* !! we want starting with 5*
            cout <<"* ";
        }
        cout <<endl;
    }

    cout <<endl;
    cout <<"Printing Piramid "<<endl;
    cout <<endl;

    for(int i = 1; i <= n; i++) {

        // space lane ke liye 
        for(int j = 1; j <= n - i; j++) {
            cout << ".";
        }

        // stars
        for(int j = 1; j <= 2*i ; j++) {
            cout << "*";
        }

        cout << endl;
    }
return 0;
}

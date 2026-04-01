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
return 0;
}

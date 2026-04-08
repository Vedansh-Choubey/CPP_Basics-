#include <iostream>
using namespace std;

int main() { 
//     cout <<"A Program To Print Matrix(a) + Matrix(b)\n";
//     cout <<" Aprogram To Print Matrix(a) - Matrix(b)\n";
     cout <<"This Program Is For 2×2 size Matrix\n";
     cout <<"Given Values of both Matrix in a11 a12 a21 a22 order\n";
    int a[2][2], b[2][2], sum[2][2];

    for(int i=0;i<2;i++) {                    //Taking Input of Matrix (a)
        for(int j=0;j<2;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<2;i++){                      //Taking Input of Matrix (b)
        for(int j=0;j<2;j++){
            cin >> b[i][j];
        }
    }
//    for(int i=0;i<2;i++) {
//        for(int j=0;j<2;j++) {
//            sum[i][j] = a[i][j] + b[i][j];    //For Addition 
//            cout << sum[i][j] << " ";
//        }
//        cout << endl;
//    }

//    return 0;
     
  
//    int sub [2][2];
//     for(int i=0;i<2;i++) {
//        for(int j=0;j<2;j++) {
//            sub[i][j] = a[i][j] - b[i][j];    //For subtraction 
//            cout << sub [i][j] << " ";
//        }
//        cout << endl;

    
     cout <<"A Program To Print Matrix(a) * Matrix(b)\n";
     int mult [2][2];
     for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            mult[i][j] = a[i][j] * b[i][j];    //For Multiplication 
            cout << mult [i][j] << " ";
        }
        cout << endl;
     }
}

#include <iostream>
using namespace std;

int main() { 
//     cout <<"A Program To Print Matrix(a) + Matrix(b)\n";
//     cout <<" Aprogram To Print Matrix(a) - Matrix(b)\n";
/*     cout <<"This Program Is For 2×2 size Matrix\n";
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

    
/*    cout <<"A Program To Print Matrix(a) * Matrix(b)\n";
    int mult [2][2];
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
     mult[i][j] = a[i][j] * b[i][j];    //For Multiplication 
           cout << mult [i][j] << " ";
        }
        cout << endl;
     }
}  */

     int a[10][10], b[10][10], result[10][10];
     int size, n;

    cout<< "Select Size Of Matrix: "<<endl;
    cout<< "1. 2x2\n";
    cout<< "2. 3x3\n";
    cout<< "3. n x n\n";
    cin>> size;

    if(size == 1) {
         n = 2;
    }else if(size = 2){
         n = 3;
    }else {
        cout << "Enter value of n: ";
        cin >> n;
    }

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    int operation;
    cout<< "Choose the Operation to be Performed:\n";
    cout <<"1. Addition Of Matrix\n";
    cout <<"2. Subtraction Of Matrix\n";
    cout <<"3. Multiplication Of Matrix\n";
    cin >> operation;

    if(operation == 1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                result[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    else if(operation == 2){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                result[i][j] = a[i][j] - b[i][j];
            }
        }
    }
    else if(operation == 3){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                result[i][j] = 0;
                for(int k = 0; k < n; k++){
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    cout << "Result Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


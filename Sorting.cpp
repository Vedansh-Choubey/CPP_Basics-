#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {7, 2, 11, 9, 5};
    int n = 5;

    sort(arr, arr + n);   

    for(int i = 0; i < n; i++) {      //For Ascending Order Printing 
        cout << arr[i] << " ";
        }
    sort(arr, arr + n, greater<int>());   // For printing in Descending order

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
}

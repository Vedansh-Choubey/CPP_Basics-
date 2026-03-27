#include <iostream>
using namespace std;

int main() {                  // Defining Array
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array at Starting Stage: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;

                              // Access element
    cout << "Element at index 2: " << arr[2] << endl;

                              // Change element
    arr[2] = 99;
    cout << "Array After Changing element at Index2 : "<< endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

                              // Delete element (shift left)
    int index = 2;
    for(int i = index; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

                              // Print array after deletion
    cout << "Array After deletion:\n";
    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

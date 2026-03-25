#include <iostream>
using namespace std;

int main() {
    float Base, Height, area;

    cout << "Enter base of the triangle: ";
    cin >> Base;

    cout << "Enter height of the triangle: ";
    cin >> Height;

    area = (Base * Height) / 2;

    cout << "Area of triangle = " << area;

    return 0;
}

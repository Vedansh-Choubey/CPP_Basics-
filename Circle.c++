#include <iostream>
using namespace std;

int main() {
    float radius, area;

    cout <<" A Program To Find Area Of A Circle ";
    cout << "Enter Radius: ";
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "Area of circle = " << area;

    return 0;
}

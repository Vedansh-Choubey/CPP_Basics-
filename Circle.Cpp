#include <iostream>
using namespace std;

int main() {
    float radius, area;

    cout <<" A Program To Find Area Of A Circle "<<endl;
    cout << "Enter Radius: ";
    cin >> radius;

    area = 3.14 * radius * radius;

    cout << "Area of circle = " << area<<endl;

    float perimeter;
    perimeter = 2 * 3.14 * radius;

    cout << "Perimeter of circle = " << perimeter;

    return 0;
}

#include <iostream>
using namespace std;

class Student {
    private:
    int marks;   // hidden data

    public:
    //Setting function
    void setMarks(int m) {
        if(m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks!" << endl;
        }
    }

    // Accessing function
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;

    s.setMarks(85);   // setting value safely
    cout << "Marks: " << s.getMarks();

    return 0;
}

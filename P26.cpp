//Create a class called Student, and create 2 member functions setData and printData, take 3 data members name. roll_no and marks
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    long roll_no;
    float marks;
    void setData(string n, long r, float m) {
        name = n;
        roll_no = r;
        marks = m;
    }
    void printData() {
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << roll_no << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main() {
    Student obj1, obj2;

    obj1.setData("Sakshi", 150087624050, 80);
    obj2.setData("Ralliyah", 150097620153, 86);
    cout << "obj1:" << "\n";
    obj1.printData();
    cout << "obj2:" << "\n";
    obj2.printData();
    return 0;
}
//create a class called AdditionClass,define data members num1,num2 and result,define member function void function void read(),void sum(),void print() respectively.
//create object obj1 and obj2 in main method and show the execution. 
#include <iostream>
using namespace std;

class additionclass {
public:
    int num1, num2, result;
    void read1() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    void read2() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    void sum(int a, int b) {
        result = a + b;
    }
    void print() {
        cout << "Sum: " << result << endl;
    }
};

int main() {
    additionclass obj1, obj2;
    cout << "For obj1:" << endl;
    obj1.read1();
    cout << "For obj2:" << endl;
    obj2.read2();
    obj1.sum(obj1.num1, obj2.num2);
    obj1.print();
    return 0;
}
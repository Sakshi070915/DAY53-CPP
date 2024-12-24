//C++ program to demonstrate constructor
#include <iostream>
using namespace std;
class abc{
    public:
    int id;

    //Default constructor
    abc()
    {
        cout <<"Default constructor called"<<endl;
        id =-1;
    }
    //Parameterized constructor
    abc(int x){
        cout << "Parameterized Constructor called " << endl;
        id=x;
    }
};
int main(){
    //obj1 will call Default Constructor
    abc obj1;
    cout << " id is: "<< obj1.id << endl;
    //obj2 will call Parameterized Constructor
    abc obj2(21);
    cout << " id is: "<< obj2.id << endl;
    return 0;
}
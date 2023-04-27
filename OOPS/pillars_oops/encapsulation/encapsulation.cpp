// What is Encapsuleation ?
// -------------------------

// Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

// Why Encapsulation?
// ------------------------

// ->  In C++, encapsulation helps us keep related data and functions together, which makes our code cleaner and easy to read.

// ->  It helps to control the modification of our data members

// ->  The getter and setter functions provide read-only or write-only access to our class members. For example,

// ->  Data hiding is a way of restricting the access of our data members by hiding the implementation details. Encapsulation also provides a way for data hiding.
// We can use access modifiers to achieve data hiding in C++

#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int standerd;
        char section;
        string name;
    public:
        void setName(string name){//    write only
            this->name=name;
        }
        string getName(){// read only
            return this->name;
        }
};

int main(){
    Student dipu;
    dipu.setName("Diptishman");

    Student das;
    das.setName("Sharandip");

    cout<<dipu.getName()<<endl;
    cout<<das.getName()<<endl;

}
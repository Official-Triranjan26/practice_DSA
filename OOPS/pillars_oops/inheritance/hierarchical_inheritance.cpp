#include<bits/stdc++.h>
using namespace std;
class Student{
    // hierarchical inheritance
    public:
    void student(){
        cout<<"he is a student "<<endl;
    }
};
class Dipu:public Student{
    //  inherites Student as public

};
class Sharandip:public Student{
    //inherites Animal as public
};

int main(){
    Dipu obj1;
    obj1.student();

    Sharandip obj2;
    obj2.student();
}
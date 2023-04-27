//  hybrid inheritance
#include<bits/stdc++.h>
using namespace std;
class Student{
    // hieracchical inheritance
    public:
    void student(){
        cout<<"he is a student "<<endl;
    }
};
class Dipu:public Student{
    //  inherites Student as public

};
class WorkingProfessional{
    public:
    void professional(){
        cout<<"He is a professional"<<endl;
    }
};
class Sharandip:public Student,public WorkingProfessional{
    //inherites Student and WorkingProfessional as public
    //multiple inheritance
};

int main(){
    Dipu obj1;
    obj1.student();
    cout<<endl;
    Sharandip obj2;
    obj2.student();
    obj2.professional();
}
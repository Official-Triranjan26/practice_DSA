#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int animal=5;
        void speaking(){
            cout<<"speaking"<<endl;
        }
};

class Dog:public Animal{
    //  overriding speaking() of animal
    public:
    void speaking(){
        cout<<"barking"<<endl;
    }
};

int main(){
    Dog obj;
    obj.speaking();
}
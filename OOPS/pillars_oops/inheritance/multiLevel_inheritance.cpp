#include<bits/stdc++.h>
using namespace std;
class Animal{
    //  mulilevel inheritance
    public:
    void animal(){
        cout<<"animal "<<endl;
    }
};
class Dog:public Animal{
    //  inherites Animal as public

};
class Labrador : public Dog{
    //  inherites Dog as public
};

int main(){
    Labrador obj;
    obj.animal();
}
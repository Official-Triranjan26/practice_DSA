#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        void human(){
            cout<<"from class Human"<<endl;
        }

};

class Male:public Human{
    // single inheritance

};

int main(){
    Male obj;
    obj.human();
}
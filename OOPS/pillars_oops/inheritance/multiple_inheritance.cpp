#include<bits/stdc++.h>
using namespace std;
class FrontEnd{
    public:
    void frontend(){
        cout<<"it has frontend properties"<<endl;
    }
};
class BackEnd{
    public:
    void backend(){
        cout<<"it has backend properties"<<endl;
    }
};
class FullStack:public FrontEnd,public BackEnd{
    // multiple inheritance
    
};

int main(){
    FullStack obj;
    obj.backend();
    obj.backend();

}
#include<bits/stdc++.h>
using namespace std;
class FrontEnd{
    public:
    void frontend(){
        cout<<"it has frontend properties"<<endl;
    }
    void function(){
        cout<<"from frontend"<<endl;
    }
};
class BackEnd{
    public:
    void backend(){
        cout<<"it has backend properties"<<endl;
    }
    void function(){
        cout<<"from backend"<<endl;
    }
};
class FullStack:public FrontEnd,public BackEnd{
    // multiple inheritance
    
};
int main(){
    FullStack obj;
    // obj.function();
    //  compiler will confuse function of which class?

    obj . FrontEnd::function();
    //  tells the compiler to consider function of FrontEnd
    //  using :: "scope resulution operator"
}
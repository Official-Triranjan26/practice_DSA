#include<bits/stdc++.h>
using namespace std;

class Add{
    public:
        //  function overloading
        //  function cannot be overloaded by only changing the return type
        int add(int a,int b){
            return a+b ;
        }

        int add(int a,int b,int c){
            return a+b+c ;
        }
};

int main(){
    Add obj;
    cout<<obj.add(1,2)<<endl;
    cout<<obj.add(1,2,3)<<endl;

}
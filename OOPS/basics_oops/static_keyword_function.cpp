    // STATIC KEYWORD
    // STATIC FUNCTIONS
#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
        char level;

    public:
        int health;
        char* name;
        static int likes;
        static int printStatic(){
            //  static functions can only access static data members
            // this keyword is not applicable for ststic functions as there is no involvement of object
            return likes;
        }
        Hero(){
            // cout<<"constructor called"<<endl;
            name=new char[10];
        }
        ~Hero(){
            cout<<"destructor called !!"<<endl;
        }
};
int Hero ::likes=5;

int main(){
    cout<<Hero::likes<<endl;
    cout<<Hero::printStatic()<<endl;
    
        
}
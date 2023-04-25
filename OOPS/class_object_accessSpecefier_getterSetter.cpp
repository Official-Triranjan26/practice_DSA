    // CLASS
    // OBJECT(STSTIC,DYNAMIC)
    // ACCESS SPECEFIER
    // GETTER
    // SETTER

#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int health;

        //getter 
        char getLevel(){
            return level;
        }
        
        //setter
        void setLevel(char c){
            level=c;
        }
    private:
        char level;
};
class Villen{
    //empty class
};

int main(){
    //  creating static object
    Hero ankur;
    Villen dipu;
    cout<<"size of object ankur : "<<sizeof(ankur)<<endl;
    cout<<"size of object dipu of empty class: "<<sizeof(dipu)<<endl;
    //   gives the total bytes of the data members

    //  assigining values 
    ankur.health=70;
    // ankur.level='A';//not accessable
    ankur.setLevel('A');


    cout<<"health of ankur is "<<ankur.health<<endl;
    //cout<<"level of ankur is "<<ankur.level<<endl;
    //level is not accessable because of private access specifier
    cout<<"level of ankur is "<<ankur.getLevel()<<endl;


}
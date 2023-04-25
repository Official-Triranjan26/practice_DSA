    // DEFAULT CONSTRUCTOR 
    // PATAMETERISED CONSTRUCTOR
    // COPY CONTRUCTOR

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

        //  constructor
        Hero(){//   non parameterised constructor
            cout<<"form constructor "<<endl;
        }
        Hero(int health,char level){//  parameterised constructor
            this->health=health;
            this->level=level;
        }

        // copy constructor
        Hero(Hero &temp){
            cout<<"form copy consructor "<<endl;
            this->health=temp.health;
            this->level=temp.level;
        }

    private:
        char level;
};
class Villen{
    //empty class
};

int main(){
    // //  creating static object
    // Hero ankur;
    // ankur.health=80;
    // ankur.setLevel('A');
    // cout<<"ankur health : "<<ankur.health<<endl;
    // cout<<"ankur level : "<<ankur.getLevel()<<endl;

    // //  creating object dynamically
    // Hero* abir=new Hero();
    // (*abir).health=70;
    // (*abir).setLevel('B');
    // cout<<"abir health : "<<abir->health<<endl;
    // cout<<"abir level : "<<abir->getLevel()<<endl;

    Hero* dipu=new Hero(100,'S');
    cout<<"dipu health : "<<dipu->health<<endl;
    cout<<"dipu level :  "<<dipu->getLevel()<<endl;

    Hero* das =new Hero(*dipu);
    cout<<"das health : "<<das->health<<endl;
    cout<<"das level :  "<<das->getLevel()<<endl;




}
    // SHALLOW COPY
    // DEEP COPY
    // DEFINED COPY CONSTRUCTOR FOR DEEP COPY
#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
        char level;

    public:
        int health;
        char* name;
        Hero(){
            cout<<"constructor called"<<endl;
            name=new char[10];
        }
        Hero(Hero &temp){// defined copy constructor to make deep copy
            char* ch=new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name=ch;
            this->health=temp.health;
            this->level=temp.level;
        }
        void print(){
            cout<<"name : "<<name<<endl;
            cout<<"level : "<<level<<endl;
            cout<<"health : "<<health<<endl;
        }

        void setName(char name[]){
            strcpy(this->name,name);
        }
        void setHealth(int health){
            this->health=health;
        }
        void setLevel(char level){
            this->level=level;
        }
};

int main(){
    Hero hero1;
    char name[5] = "dipu";
    hero1.setName(name);
    hero1.setHealth(85);
    hero1.setLevel('D');

    // hero1.print();
    //  calling default copy constructor
    //  default copy constructor does shallow  copy

    Hero hero2(hero1);
    // hero2.print();

    //  changing value and print again
    hero1.name[0]='b';//    changr in object hero1
    hero1.health=95;
    hero1.print();

    hero2.print();


}
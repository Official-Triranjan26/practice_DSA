    // copy assignment operator

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
    Hero hero2(hero1);
    hero1.name[0]='b';

    hero1.print();
    hero2.print();

    hero1=hero2;//  copy assignment operator 
                //  copies all the data menbers of hero2 to hero1
    cout<<endl<<endl;
    hero1.print();
    hero2.print();


}
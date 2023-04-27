    // DESTRACTOR
    // FOR STATIC AND DYNAMICALLY ALLOCATED OBJECTS

// Destructors are usually used to deallocate memory
#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
        char level;

    public:
        int health;
        char* name;
        Hero(){
            // cout<<"constructor called"<<endl;
            name=new char[10];
        }
        ~Hero(){
            cout<<"destructor called !!"<<endl;
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
    //  object created statically
    //  for statically allocated object desctructor will autometacally be called
    Hero hero1;

    //  object created dynamically
    Hero* hero2=new Hero();
    //  for dynamically allocated object we have to call destructor
    delete hero2;

}
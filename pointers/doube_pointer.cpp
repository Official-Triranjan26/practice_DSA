#include<bits/stdc++.h>
using namespace std;

void update(int **p2){

    // p2 = p2 +1;
    // if changed ? --> not chaned
    // *p2=*p2+1;
    // if changed ? --> p1 changed
    **p2=**p2+1;
    // if changed ? --> value changed
}

int main(){
    int value=5;
    int *p1=&value;
    int **p2=&p1;
    /*
    cout<<"value : "<<value<<endl;

    cout<<"p1       : " <<p1<<endl;
    cout<<"&value   : " <<&value<<endl;

    cout<<"p2   : " <<p2<<endl;
    cout<<"&p1   : " <<&p1<<endl;
    */
   cout<<"value : "<<value<<endl;
   cout<<"p1 : "<<p1<<endl;
   cout<<"p2 : "<<p2<<endl;
   update(p2);
   cout<<"value : "<<value<<endl;
   cout<<"p1 : "<<p1<<endl;
   cout<<"p2 : "<<p2<<endl;
    return 0;
}
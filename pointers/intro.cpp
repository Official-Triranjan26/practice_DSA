#include<bits/stdc++.h>
using namespace std;

int main(){
    // initialization
    int num=5;
    int *ptr1 =&num; // initialization method 1
    int *ptr2=0;    //initialization method 2
    ptr2=&num;
    cout<<"num "<<num<<endl;
    cout<<"*ptr1 "<<*ptr1<<endl;
    cout<<"*ptr2 "<<*ptr2<<endl;
    cout<<"ptr1 "<<ptr1<<endl;
    cout<<"ptr2 "<<ptr2<<endl;
    cout<<"size of pointer "<<sizeof(*ptr2)<<endl;

    // shot note
    /*
    & num   --> address of num variable
    *ptr    --> value stored on address stored at ptr
            --> value of num
    ptr     --> address of num 
    sizeof(ptr)--> 4/8
    */



    return 0;
}
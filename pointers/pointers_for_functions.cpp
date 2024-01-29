#include<bits/stdc++.h>
using namespace std;
void print(int* p){ // pointer as function perameter
    cout<<"p -->"<<p<<endl;
    cout<<"*p ->"<<*p<<endl;
}
void update(int * ptr){
    *ptr=*ptr+1;
    // cout<<*ptr<<endl;
}
void getSum(int *arr,int size){ // 'int arr[]' and 'int *arr' is same 
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum : "<<sum<<endl;
}

int main(){
    int value=5;
    int *ptr = &value;
    int arr[10]={2,4,6,8};
    int size=4;
    print(ptr);
    cout<<"Before :"<<*ptr<<endl;
    update(ptr);
    cout<<"After  :"<<*ptr<<endl;

    getSum(arr,size);


    return 0;
}
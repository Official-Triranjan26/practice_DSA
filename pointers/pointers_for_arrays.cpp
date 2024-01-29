#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={2,4,6};
    int i=1;

    cout<<"1st "<<arr<<endl;    //gives the address of the 1st block of the array
    cout<<"2nd "<<&arr[0]<<endl;// &arr[0] address of the 1st block of the array

    cout<<"3rd "<< *arr<<endl;  //value of 1st element
    cout<<"4th "<< *(&arr[0])<<endl;    //value of 1st element

    cout<<"5th "<< *arr +1 <<endl;  // value at 1st block +1
    cout<<"6th "<< *(arr+1)<<endl;  // *(arr+1) value at next integer location (100 -> 104)
    cout<<"7th "<< arr[1]<<endl;    // second element of arr
    cout<<"8th "<< i[arr]<<endl;    // arr[i] = *(arr+i)
                                    // i[arr] = *(arr+i)
    
    // arr=arr+1;// error : value of arr cannot be changed as it is mapped in symbol table
    int * ptr = arr;
    cout<<"9th "<<ptr<<" "<<*ptr<<endl;
    ptr = ptr+1;
    cout<<"10th "<<ptr<<" "<<*ptr<<endl;


    return 0;
}
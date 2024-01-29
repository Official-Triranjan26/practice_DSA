#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={1,3,5,7,9};
    char charArr[5]="abcd";
    char *ptr =&charArr[0];

    cout<<"1st "<<arr<<endl;
    //  incase of int array the variable arr gives address of 1st element
    cout<<"2nd "<<charArr<<endl;
    //  incase of char array the variable charArr gives the entire string

    //  therefore the implementation of cout is different for char and int array 

    cout<<"3rd "<<ptr<<endl; 
    //  even if we create a seperate pointer of char type and point it to the 1st element of the char array and print the pointer --> it gives the entire content

    char ch ='z';
    char * p = &ch;
    cout<<"4th "<<p<<endl; // output :zabcd
    // we know cout for char array works differently.
    
    // in the above exemple  charArr's 5th element is null char, we know cout for char Array prints char stored in continious memory locations untill it gets a null char

    // as there is no null chacter in ch the cout function keeps printing values in continious memory locations untill it gets a null character

    // in the variable at line no 19 there is no null char , thats why it continious to print randon chars stored in continious memory locations untill it gets a null character 



    return 0;
}
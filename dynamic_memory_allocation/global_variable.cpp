#include<bits/stdc++.h>
using namespace std;
int num=100;//global variable

//GLOBAL VARIABLE : global variable is a variable that can be accessed by all the functions
//using global variable is not a good practice , becaus e any function can cahange the value of the global variable
//for purpose of sharing data between functions , instayed of using golbal variable we can can use referance variable 
void a(){
	cout<<"2. We are on the way to celebrate our "<<num <<"th independence day on 2047"<<endl;
}
void b(){
	cout<<"3. I have compleated solving "<< num <<" questions in Leetcode"<<endl;
}
int main(){
	cout<<"1 .kohli has scored his "<< num <<"th century in international cricket"<<endl;
	a();
	b();
}

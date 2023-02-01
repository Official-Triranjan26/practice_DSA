//Bitwise operator

#include<iostream>
using namespace std;

int main(){
	int a=4;
	int b=6;
//	and operator
	cout<<"a & b :"<<(a&b)<<endl;
//	or operator
	cout<<"a | b :"<<(a|b)<<endl;
//	not operator
	cout<<"~ a :"<<(~a)<<endl;
//	xor operator
	cout<<"a ^ b :"<<(a^b)<<endl;
	
	
//	left shift operator
	cout<<(17<<1)<<endl;
	//left shift by one multiplys it by 2
	cout<<(17<<2)<<endl;
	//left shift by two multiplys it by 4
	
//	right shift operator
	cout<<(10>>1)<<endl; 
	//right shift by one devides it by 2
	cout<<(10>>2)<<endl;
	//left shift by two devides it by 4
	
}

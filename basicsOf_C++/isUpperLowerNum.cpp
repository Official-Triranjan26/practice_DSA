//take a input character and print wheather the character is lowercase /uppercase or number

#include<iostream>
using namespace std;

int main(){
	char a;
	cout<<"Enter the number(0-9)/character(only alphabets) : ";
	cin>>a;
	int ascci=a;
	cout<<ascci<<endl;
	if(ascci>=48 && ascci<=57){
		cout<<"Entered character is a number !!";
	}
	else if(ascci>=65 && ascci<=90){
		cout<<"Entered character is a uppercase !!";
	}
	else if(ascci>=97 && ascci<=112){
		cout<<"Entered caharcter is lowercase !!";
	}
	else{
		cout<<"Entered proper input !!";
	}
	
}

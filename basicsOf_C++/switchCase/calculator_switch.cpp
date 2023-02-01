#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	char operation;
	cout<<"Enter the 1st number : "<<endl;
	cin>>num1;
	cout<<"Enter the 2nd number : "<<endl;
	cin>>num2;
	cout<<"Enter the operation : "<<endl;
	cin>>operation;
	
	switch(operation){
		case'+':cout<<(num1+num2);
				break;
			
		case'-':cout<<(num1-num2);
				break;
			
		case'*':cout<<(num1*num2);
				break;
			
		case'/':cout<<(num1/num2);
				break;
			
		case'%':cout<<(num1%num2);
				break;
		
		default:cout<<"Invalid operation !";
	}
	
	
} 
>> note :
		switch(expression) {
			  case x:
			    // code block
			    break;
			  case y:
			    // code block
			    break;
			  default:
			    // code block
	}
	 here expression cannot be a string or float
	 expression should only be int and char
	 
	 'continue' -->skip this iteration ,continue with the next iteration

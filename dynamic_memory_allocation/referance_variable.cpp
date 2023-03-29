#include<bits/stdc++.h>
using namespace std;

void update1(int n){//pass by value
	n++;
}
void update2(int &n){//pass by reference
	n++;
}

int& returnByReferance(int n){//return by referance
	int a=n;
	int &ans=a;
	return ans;
}

int main(){
	/*
	//CASE 1 : understanding referance variable
	int num1=5;
	int &num2=num1;//num2--->reference variable of num1
	
	cout<<num1<<endl;//5
	num2++;
	cout<<num1<<endl;//6
	num2++;
	cout<<num1<<endl;//7
	*/
	/*
	
	//CASE2 : pass by referance
	int num=5;
	cout<<"before : "<<num<<endl;
	update1(num);
	cout<<"after  : "<<num<<endl;
	cout<<endl;
	
	cout<<"before : "<<num<<endl;
	update2(num);
	cout<<"after  : "<<num<<endl;
	*/
	
	//CASE 3 : return by referance
	int num=5;
	cout<<returnByReferance(num)<<endl;
	//Note: We should never return a local variable as a reference, reason being, as soon as the functions returns,
	//local variable will be erased, however, we still will be left with a reference which might be a security bug in the code.
	
	
}

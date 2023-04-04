#include<bits/stdc++.h>
using namespace std;
/*

//	CALCULTE FACTORIAL

int factorial(int n){
	//base condition
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);//recursive relation / recursive function call
}
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<factorial(n);
}	*/

/*
//	CALCULATE 2^N

int calPowerOf2(int n){
	if(n==0){
		return 1;
	}
	return (2*calPowerOf2(n-1));
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"calculated power : "<<calPowerOf2(n);
	
}
*/

// 	PRINTING FROM 1 TO N

void display(int n){
	if (n==0){
		return ;
	}
	display(n-1);//head recursion
	cout<<n<<endl;
}
//void display(int n){
//	if (n==0){
//		return ;
//	}
//	cout<<n<<endl;
//	display(n-1);//tail recursion
//}
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	display(n);
	
}

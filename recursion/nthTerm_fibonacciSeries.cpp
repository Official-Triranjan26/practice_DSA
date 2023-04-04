#include<bits/stdc++.h>
using namespace std;

int fib(int n){//returns nth term in fibonacci series
	//	base case
	if(n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	//recursive relation
	
	int ans=fib(n-1)+fib(n-2);
	return ans;
	
}

int main(){
	
	int num;
	cout<<"nth term in fibonacci series : enter n : ";
	cin>>num;
	
	cout<<"nth term in fibonacci series :"<<fib(4)<<endl;
	
}

#include<iostream>
using namespace std;
void Fibonacci(int n){
	int ans;
	int a=0;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for (int i=2;i<n;i++){
		ans=a+b;
		a=b;
		b=ans;
		cout<<ans<<" ";
		
	}
	
}
int main(){
	int n;
	cout<<"Enter the number ,till you want the series : "<<endl;
	cin>>n;
	Fibonacci(n);
}

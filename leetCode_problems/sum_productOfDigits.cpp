#include<iostream>
using namespace std;

int main(){
	int n,sum=0,product=1;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	int i;
	
	for(i=1;n>0;i++){
		int remainder=n%10;
		int number=n/10;
		n=number;
		
		sum=sum+remainder;
		product=product*remainder;
	}
	cout<<"answer : "<<(product-sum)<<endl;
	return 0;
}

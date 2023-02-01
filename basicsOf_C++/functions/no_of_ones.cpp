#include<iostream>
#include<math.h>
using namespace std;

//int toBinary(int n){
//	int ans=0,i=0;
//	while(n!=0){
//		int bit=n&1;
//		ans=ans+(bit*pow(10,i));
//		n=n>>1;
//		i++;
//	}
//		return ans;
//}

int countBitOne(int n){	int count=0;
	while(n!=0){
		if(n&1==1){
			count=count+1;
		}
		n=n>>1;
	}
	return count;
}

int main(){
	int num1,num2;
	cout<<"Enter the 1st decimal number: "<<endl;
	cin>>num1;
	cout<<"Enter the 2nd decimal number : "<<endl;
	cin>>num2;

	cout<<"Total count of bit '1' = "<<(countBitOne(num1)+countBitOne(num2))<<endl;	
}

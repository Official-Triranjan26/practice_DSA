#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the binary number : "<<endl;
	cin>>n;
	int digit,i,ans=0;
	
	while(n!=0){
		digit=n%10;
		if(digit==1){
			ans=ans+pow(2,i);
		}
		i=i+1;
		n=n/10;
	}
	cout<<"answer (binary-->decimal)  : "<<ans<<endl;
}


//output :
//Enter the binary number : 1000
//answer (binary-->decimal)  : 8



//DECIMAL --> BINARY
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number to convert : "<<endl;
	cin>>n;
	int ans=0,i=0;
	while(n!=0){
		int bit=n&1;
		ans=ans+(bit*pow(10,i));
		i=i+1;
		n=n>>1;		
	}
	cout<<"Answer : "<<ans<<endl;
}

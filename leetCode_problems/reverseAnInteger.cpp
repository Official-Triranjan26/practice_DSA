#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans=0;
	while(n!=0){
		int digit=(n%10);
		ans=digit+(ans*10);
		n=n/10;
	}
	if(ans>INT_MAX||ans<INT_MIN){
		cout<<"!!!!!<<endl";
	}
	cout<<ans<<endl;
}

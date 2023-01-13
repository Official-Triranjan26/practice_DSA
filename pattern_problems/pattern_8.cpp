#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter the number of row : ";
	cin>>n;
	
	
	while(i<=n){
		int j=i;
		while(j>0){
			cout<<j<<" ";
			j=j-1;
		}
		cout<<endl;
		i=i+1;
	}
}

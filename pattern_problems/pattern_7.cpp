#include<iostream>
using namespace std;

int main(){
	int n,i=0,count=0;
	cout<<"Enter the numbrer of rows : ";
	cin>>n;
	
	while(i<=n){
		int j=1;
		while(j<=i){
			count=count+1;
			cout<<count<<" ";
			j=j+1;
			
		}
		cout<<endl;
		i=i+1;
	}
}

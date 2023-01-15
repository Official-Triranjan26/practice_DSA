//pattern_12
//
//1 2 3
//2 3 4
//3 4 5
#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter the number of row : ";
	cin>>n;
	int count =0;
	
	while(i<=n){
		int j=1;
		while(j<=n){
			count=count+1;
			cout<<count<<" ";
			j=j+1;
		}
		count=count-2;
		cout<<endl;
		i=i+1;
		
	}
}

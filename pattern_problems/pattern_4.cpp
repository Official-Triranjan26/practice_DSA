//pattern_4
//
//1 2 3
//4 5 6
//7 8 9 

#include<iostream>
using namespace std;

int main(){
	int n,i=1,count=0;
	cout<<"Enter the number of row/column : ";
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=n){
			count=count+1;
			cout<<count<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	}
}

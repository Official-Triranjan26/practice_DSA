//pattern_13
//
//A B C
//B C D
//C D E

#include<iostream>
using namespace std;

int main(){
	int n,i=1,count=0;
	cout<<" Enter the number of row : ";
	cin>>n;
	
	
	while(i<=n){
		int j=1;
		while(j<=n){
			char b='A'+i+j-2;
			cout<<b<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}  

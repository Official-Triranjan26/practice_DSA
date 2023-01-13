#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter the number of row : ";
	cin>>n;
	char a='A';
	int ascii=int(a);
	
	
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<char(ascii)<<" ";
			j=j+1;
		}
		cout<<endl;
		ascii=ascii+1;
		i=i+1;
		
	}
}

#include<iostream>
using namespace std;

int main(){
	
	int n,i=1,count=0;
	cout<<"Enter the number of row : ";
	cin>>n;
	char a='A';
	int ascii=int(a);
	
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<char(ascii+count)<<" ";
			count=count+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

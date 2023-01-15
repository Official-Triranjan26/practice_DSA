//pattern_10
//
//A B C
//A B C
//A B C

#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter the number of row: ";
	cin>>n;
	char a='A';
	 while(i<=n){
		int ascii=int(a);
	 	int j=1;
	 	while(j<=n){
	 		cout<<char(ascii)<<" ";
	 		ascii=ascii+1;
	 		j=j+1;
		 }
		 cout<<endl;
		 i=i+1;
	 }
}

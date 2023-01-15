//pattern_14
//
//A
//B B
//C C C

#include<iostream>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=i){
			char a='A'+i-1;
			cout<<a<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

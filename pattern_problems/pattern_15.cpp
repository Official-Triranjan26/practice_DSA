//pattern_15

//A
//B C
//C D E
//D E F G

#include<iostream>
using namespace std;

int main(){
	int n,i=0;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=i){
			char a='A'+i+j-2;
			cout<<a<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

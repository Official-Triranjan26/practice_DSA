//pattern_16
//
//D
//C D
//B C D
//A B C D

#include<iostream>
using namespace std;

//int main(){
//	int n,i=1;
//	cin>>n;
//	while(i<=n){
//		int j=1;
//		while(j<=i){
//			char a='A'+n-i+j-1;
//			cout<<a<<" ";
//			j=j+1;
//		}
//		
//		cout<<endl;
//		i=i+1;
//	}
//}

//smart method :

int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int j=1;
		char a='A'+n-i;
		while(j<=i){
			cout<<a<<" ";
			a=a+1;
			j=j+1;
		}
		
		cout<<endl;
		i=i+1;
	}
}

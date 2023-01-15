//pattern_20
//   1
//  121
// 12321
//1234321


#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<" Enter the number of row : ";
	cin>>n;
	
	
	while(i<=n){
		int j=1,k=1;
		int space= n-i;
		while(space){
			cout<<"  ";
			space=space-1;
		}
		while(j<=i){
			cout<<j<<" ";
			j=j+1;
		}
		int start=i-1;
		while(k<=i-1){
			cout<<start<<" ";
			start=start-1;
			k=k+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}  

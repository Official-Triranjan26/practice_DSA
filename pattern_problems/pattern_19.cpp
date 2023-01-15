//pattern_19
//*****
// ****
//  ***
//   **
//    *


#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<" Enter the number of row : ";
	cin>>n;
	
	
	while(i<=n){
		int j=1;
		int space= i-1;
		while(space){
			cout<<" ";
			space=space-1;
		}
		while(j<=n-i+1){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}  

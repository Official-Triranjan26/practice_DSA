#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	cout<<"------------------"<<endl;
	
	for(int col=0;col<3;col++){
		if(col%2==0){
			for(int row=0;row<3;row++){
				cout<<arr[row][col]<<" ";
			}
		}
		else{
			for(int row=2;row<=0;row--){
				cout<<arr[row][col]<<" ";
			}
		}
	}
	
}

#include<bits/stdc++.h>
using namespace std;
bool isFound(int arr[][3],int target,int r,int c ){
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			if(arr[row][col]==target){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int arr[3][3];
	//	taking input to 2D array(row wise)
	cout<<"Enter the elements of the 2D array ( for row wise):  "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
		}
	}
	
	//	printing 2D array
	cout<<"The 2D array is --> "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	int target;
	cout<<"Enter the Target : "<<endl;
	cin>>target;
	
	if(isFound(arr,target,3,3)){
		cout<<"Element found !"<<endl;
	}
	else{
		cout<<"Not found !!"<<endl;
	}
	
}

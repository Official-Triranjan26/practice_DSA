#include<bits/stdc++.h>
using namespace std;

int main(){
	//	declare the 2D array
		int arr[3][3];
	
	// declare the 2D array as hard code
	//	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	//	decleare elements row wise
	//	int arr[3][3]={{1,11,111},{2,22,222},{3,33,333}};
	
	//	taking input to 2D array(row wise)
	cout<<"Enter the elements of the 2D array ( for row wise):  "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
		}
	}
	
	//	taking input to 2D array(col wise)
	//	cout<<"Enter the elements of the 2D array (for col wise) :  "<<endl;
	//	for(int col=0;col<3;col++){
	//		for(int row=0;row<3;row++){
	//			cin>>arr[row][col];
	//		}
	//	}
	//	
	//	printing 2D array
	cout<<"The 2D array is --> "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
}

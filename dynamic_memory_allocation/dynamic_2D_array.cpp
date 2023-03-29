//how to create 2D array dynamically?
//taking input and print the output
//release the memory

#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	//	FOR 2D ARRAY OF N*N
	int n;
	cout<<"enter the num of row and col : ";
	cin>>n;
	//	creating 2D array dinamically
	int** arr=new int*[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }
		
	//	taking input
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}	
	//	printing output
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	*/
	
	//	FOR 2D ARRAY OF M*N
	int row,col;
	cout<<"enter num of row : ";
	cin>>row;
	cout<<"enter num of col : ";
	cin>>col;
	
	int** arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
	}
	
	//taking input
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	//printing output
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	//deleting array dynamically
	for(int i=0;i<row;i++){
		delete []arr[i];
	}
	delete []arr;
}

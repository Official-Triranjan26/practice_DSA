#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int row;
	cout<<"enter no of row: ";
	cin>>row;
	int *a=new int[row];
	
	int **arr=new int*[row];
	for(int i=0;i<row;i++){
		int col;
		cout<<"enter number of cols in row "<<i<<" : ";
		cin>>col;
		a[i]=col;
		arr[i]=new int[col];
	}
	cout<<"created successfully !"<<endl;
	//taking input
	for(int i=0;i<row;i++){
		cout<<"input for row : "<<i<<endl;
		int col=a[i];
		for(int j=0;j<col;j++){
			cout<<"row : "<<i<<"  col : "<<j<<" ";
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	//printing output
	cout<<"created array : "<<endl;
	for(int i=0;i<row;i++){
		int col=a[i];
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}

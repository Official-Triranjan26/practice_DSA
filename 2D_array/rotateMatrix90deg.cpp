#include<bits/stdc++.h>
using namespace std;

void printMatrix(int arr[][4],int r,int c){
	cout<<"Input matrix --->"<<endl;
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
}

void rotateMatrix(int arr[][4],int row,int col){
		
	for(int i=0;i<col;i++){
		for(int j=row-1;j>=0;j--){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,13};
	printMatrix(arr,3,4);
	cout<<"Matrix after  90deg rotation -->"<<endl;
	rotateMatrix(arr,3,4);
	
	
}

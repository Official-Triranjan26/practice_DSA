#include<bits/stdc++.h>
using namespace std;
void printMatrix(int arr[][3],int r,int c){
	cout<<"Input matrix --->"<<endl;
	for(int row=0;row<r;row++){
		for(int col=0;col<c;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
}

int binarySearch(int arr[][3],int row,int col,int target){
	int start=0;
	int end=(row*col)-1;
	int mid=start+(end-start)/2;
	
	while(start<=end){
		int element=arr[mid/col][mid%col];
		if(target==element){
			return mid;
		}
		if(target>element){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return 0;
}

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	printMatrix(arr,3,3);
	int index=binarySearch(arr,3,3,9);
	
	if(index!=0){
		cout<<"search element found on row-->"<<index/3<<" and col-->"<<index%3<<endl;
	}
	else{
		cout<<"Search element is not found !!"<<endl;
	}
	
}

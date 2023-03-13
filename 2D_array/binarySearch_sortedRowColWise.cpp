#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[][5],int target,int start,int end,int row,int col){
	int mid=start+(end-start)/2;
	
	while(start<=end){
		int midElement=arr[mid/col][mid%col];
		if(midElement==target){
			return true;
		}
		if(target>midElement){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return false;
	
}

bool searchInMatrix(int arr[][5],int row ,int col,int target){
	int start=0;
	int end=start+col-1;
	for(int i=0;i<row;i++){
		if(binarySearch(arr,target,start,end,row,col)){
			return true;
		}
		start=start+col;
		end=end+col;
	}
	return false;
}
int main(){
	int searchElement;
	cout<<"Enter the search element -->"<<endl;
	cin>>searchElement;
	
	int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
	if(searchInMatrix(arr,5,5,searchElement)){
		cout<<"Search element found !!"<<endl;
	}
	else{
		cout<<"Search elment not found !!"<<endl;
	}
}

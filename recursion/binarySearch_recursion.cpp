#include<bits/stdc++.h>
using namespace std;

int bSearch(int arr[],int se,int start,int end){
	int mid=start+(end-start)/2;
//	cout<<" mid"<<arr[mid]<<endl;
	//base case
	if(arr[mid]==se){
		return mid;
	}
	if(start>end){
//		cout<<start<<" "<<end;
		return -1;
	}
	//processing
	if(se>arr[mid]){
//		cout<<" 1"<<endl;
		start=mid+1;
		bSearch(arr,se,start,end);
	}
	else{
//		cout<<" 2"<<endl;
		end=mid-1;
		bSearch(arr,se,start,end);
	}
}

int main(){
	int arr[10]={1,2,3,7,8};
	int se=1,size=5;
	int start=0;
	int end=size-1;
	
	cout<<"Search Element foun on index :"<<bSearch(arr,se,start,end);
	
}

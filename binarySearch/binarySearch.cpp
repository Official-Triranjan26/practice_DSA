#include<iostream>
using namespace std;

////using recursion

//int binarySearch(int arr[],int start,int end,int searchElement){
//	
//	int mid=((start+end)/2);
//	if(end<start){
//		return -1;
//	}
//	else{
//		if(searchElement==arr[mid]){
//			return mid;
//		}
//		else if(searchElement<mid){
//			binarySearch(arr,start,mid-1,searchElement);
//		}
//		else {
//			binarySearch(arr,mid+1,end,searchElement);
//		}
//	}
//}
//---------------------------------------------------------------

//Iterative implementation of Binary Search 
int binarySearch(int arr[],int start,int end,int searchElement){
	
	while(end>=start){
		int mid=((start+end)/2);
		if(searchElement==arr[mid]){
			return mid;
		}
		else if(searchElement<mid){
			end=mid-1;
		}
		else {
			start=mid+1;
		}
	}
	return -1;
}

int main(){
	int arr[100],size,searchElement;
	cout<<"Enter the lenth of the array : ";
	cin>>size;
	cout<<"Enter the search element : ";
	cin>>searchElement;
	cout<<"Enter the array elements (elements must be in sorted order)"<<endl;
	for(int i=0;i<size;i++){
		cout<<"element : "<<i+1<<"  ";
		cin>>arr[i];
	}
	int start=0,end=size-1;
	int result=binarySearch(arr,start,end,searchElement);
	
	if(result==-1){
		cout<<"Search element not found !!";
	}
	else{
		cout<<"Search element found on index : "<<result;
	}
} 

#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int searchElement){
	
	int start=s;
	int end=e;
	int mid=(start+end)/2;
	
	while(start<=end){
//		cout<<"binary search"<<endl;
		if(arr[mid]==searchElement){
			return mid;
		}
		else if( arr[mid]<searchElement){
			start=mid+1;
		}
		else {
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
//	cout<<"Searchelement not found !!"<<endl;
	
}
int calPevot(int arr[],int size){
	int start=0,end=(size-1);
	int mid=(start+end)/2;
	
	while(start<end){
		
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		
		mid=(start+end)/2;
	}
	return end;
}

int main(){
	int arr[]={8, 9, 4, 5};
	int size=4;
	int target=4;
	int pevot=calPevot(arr,size);
//	cout<<pevot<<endl;
//	cout<<arr[pevot]<<endl;
//	cout<<target<<endl;
//	cout<<arr[size-1]<<endl;
	if(arr[pevot==target]){
		cout<<"Search element found on : "<<pevot<<endl;
		exit(0);
	}
	if(arr[pevot]<target&&target<arr[size-1]){
		cout<<"Search element found on 1: "<<binarySearch(arr,pevot,size-1,target)<<endl;
	}
	else{
		cout<<"Search element found on 2: "<<binarySearch(arr,0,pevot-1,target)<<endl;
	}
}

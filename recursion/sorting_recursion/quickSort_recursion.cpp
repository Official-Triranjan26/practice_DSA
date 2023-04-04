#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int partition(int arr[],int start,int end){
	
	//	let the starting element is pivot
	int pivot=arr[start];
	int count=0;
	
	//	countig number of elements less than pivot
	for(int i=start+1;i<=end;i++){
		if(arr[i]<pivot){
			count+=1;
		}
	}
	//	proper position to place pivot 
	int pivotIndex=start+count;
	swap(arr[pivotIndex], arr[start]);
	
	int i=start;
	int j=end;
	
	//	now rearrange the array in a way that all the left elements from pivotIndex are 
	//less than pivot and right elements are greater
	while(i<pivotIndex && j>pivotIndex){
		// if the left elements are already smaller then shift the pointer i forward
		while(arr[i]<arr[pivotIndex]){
			i++;
		}
		// if the right elements are already greater then shift the pointer j backward
		while(arr[j]>arr[pivotIndex]){
			j--;
		}
		//	if not then swap after chacking the condition
		if(i<pivotIndex && j>pivotIndex){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
	
	return pivotIndex;
}

void quickSort(int arr[],int start,int end){
	
	//	getting the pivotIndex
	int pivotIndex=partition(arr,start,end);
	
	//	base case
	if(start>=end){
		return;
	}
	
	//	sorting the left part
	quickSort(arr,start,pivotIndex-1);
	
	//	sorting the right part
	quickSort(arr,pivotIndex+1,end);
	
}

int main(){
	int arr[5]={5,4,6,2,1};
	int size=5;
	cout<<"Before : ";
	printArray(arr,size);
	cout<<endl;
	quickSort(arr,0,size-1);
	cout<<"After : ";
	printArray(arr,size);
	
}

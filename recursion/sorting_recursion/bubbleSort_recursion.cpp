#include<bits/stdc++.h>
using namespace std;

//ITERATION METHOD
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void bubbleSort(int arr[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}


//RECURSIVE METHOD
void bubbleSort_R(int arr[],int size){
	//base case
	if(size==0){
		return;
	}
	//processing
	for(int i=0;i<size-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	//recursive relation
	bubbleSort_R(arr,size-1);
}

int main(){
	int arr[10]={5,4,3,2,1};
	int size=5;
//	printArray(arr,size);
//	bubbleSort(arr,size);
//	printArray(arr,size);

	printArray(arr,size);
	bubbleSort_R(arr,size);
	printArray(arr,size);
	
}

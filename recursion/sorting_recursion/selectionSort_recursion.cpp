#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void selectionSort(int arr[],int size){
	
	
	for(int i=0;i<size-1;i++){
		int min=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
			cout<<min<<endl;
		}
		swap(arr[min],arr[i]);
	}
}

void selectionSort_R(int arr[],int size,int min){
	//base case
	if(size==0){
//		cout<<" 2"<<endl;
		return;
	}
	if(size==1){
//		cout<<" 1"<<endl;
		return;
	}
	//	processing
	int start=min;
	cout<<start<<endl;
		for(int j=min+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
//			cout<<min<<endl;
		}
		swap(arr[min],arr[start]);
		start+=1;
	//recursive relation
	selectionSort_R(arr,size-1,start);
	
}

int main(){
	int arr[10]={5,4,3,2,1};
	int size=5;
	printArray(arr,size);
	selectionSort_R(arr,size,0);
	printArray(arr,size);
	
}

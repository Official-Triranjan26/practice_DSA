#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void marge(int arr[],int start,int end){
	//	calculating mid
	int mid=(start+end)/2;
	
	//	calculate the length of splitted arrays
	int len1=mid-start+1;
	int len2=end-mid;
	
	//	creating 2 array
	int *first=new int[len1];
	int *second=new int[len2];
	
	//	 coppy elements in 1st array
	int index=start;
	for(int i=0;i<len1;i++){
		first[i]=arr[index];
		index+=1;
	}
	
	//	 coppy elements in 2nd array
	index=mid+1;
	for(int i=0;i<len2;i++){
		second[i]=arr[index];
		index+=1;
	}
	
	//	marge 2 sorted arrays
	int index1=0;//	starting index of array 1
	int index2=0;//	starting index of array 2
	index=start;//	starting index of main array 
	
	while(index1<len1&&index2<len2){//	elements will store in sorted order in main array till (less between len1 and len2)
		if(first[index1]<second[index2]){
			arr[index]=first[index1];
			index+=1;
			index1+=1;
		}
		else{
			arr[index]=second[index2];
			index+=1;
			index2+=1;
		}
	}
	
	while(index1<len1){//	if len1 is greater remaining elements in array 1 is store in main array
		arr[index]=first[index1];
		index+=1;
		index1+=1;
	}
	
	while(index2<len2){//	if len2 is greater remaining elements in array 2 is store in main array
		arr[index]=second[index2];
		index+=1;
		index2+=1;
	}
	
	delete []first;
    delete []second;
}

void marge_sort(int arr[],int start,int end){
	int mid=(start+end)/2;
	
	//	base condition
	if(start>=end){
		return;
	}
	
	//	recursive relation
	//	sorting left part
	marge_sort(arr,start,mid);
	
	//	sorting right part
	marge_sort(arr,mid+1,end);
	
	//	marge
	marge(arr,start,end);
}

int main(){
	int arr[5]={5,4,3,2,1};
	int size=5;
	int start=0;
	int end=size-1;
	printArray(arr,size);
	marge_sort(arr,start,end);
	printArray(arr,size);
}

#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void insertionSort(int arr[],int n){
	for(int i=1;i<2;i++){
		int temp = arr[i];
		int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
	
}

int main(){
	int arr[5]={9,3,8,4,7};
	int size=5;
	cout<<endl;
	insertionSort(arr,size);
	printArray(arr,size);
}

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[5]={9,3,8,4,7};
	int size=5;
	cout<<"Given array : ";
	printArray(arr,size);
	cout<<endl;
	bubbleSort(arr,size);
	cout<<"Sorted array : ";
	printArray(arr,size);
}

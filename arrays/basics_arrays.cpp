#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}

int main(){
	int arr1[10]={1,2};
	int n=10;
	printArray(arr1,n);
	
	cout<<endl;
	
	int arr2[10]={1};
	printArray(arr2,10);
	
	cout<<"Size : "<<sizeof(arr2)<<endl;
}

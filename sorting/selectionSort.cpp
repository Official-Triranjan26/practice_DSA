#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void selectionSort(int arr[],int size){
	for (int i=0;i<size-1;i++){
		int min=i;
		for (int j=i;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[i],arr[min]);
	}
	printArray(arr,size);
	
}

int main(){
	int arr[5]={9,3,8,4,7};
	int size=5;
	cout<<endl;
	selectionSort(arr,size);
}

#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size,int start=0/*default argument*/){
	for(int i=start;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	printArray(arr,size);//set default start to 0
	printArray(arr,size,2);
}

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){
	//base case
	int lastIndex=size-1;
	if(lastIndex==0){
		return true;
	}
	if(arr[lastIndex]<arr[lastIndex-1]){
		return false;
	}
	//processing
	isSorted(arr,size-1);
}

int main(){
	int arr[10]={1,2,6,4,5};
	
	if(isSorted(arr,5)){
		cout<<"sorted "<<endl;
	}	
	else{
		cout<<"not sorted !!"<<endl;
	}
}

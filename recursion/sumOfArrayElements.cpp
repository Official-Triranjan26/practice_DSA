#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[],int size){
	int sum=0;
	//base case
	int lastElement=size-1;
	if(lastElement==-1){
		return sum;
	}
	
	//recursive relation
	
	sum=arr[lastElement]+getSum(arr,size-1);
}

int main(){
	int arr[10]={1,2,3,4,5};
	cout<<"Sum :"<<getSum(arr,5)<<endl;
	
}

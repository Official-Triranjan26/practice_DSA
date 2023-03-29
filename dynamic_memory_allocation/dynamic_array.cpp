#include<bits/stdc++.h>
using namespace std;

int getSum(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	/*
	//	stack memory is used for static memory allocation
	//	heap memory is used for dynamic memory allocation
	//	to dynamically allocate a memory we use " new " keyword
	//	https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
	char *ch=new char;//	new char gives us address which is stord in ch
	*ch='a';
	cout<<*ch<<endl;
	//	ch is in stack memory and a is in heap memory
	*/
	
	int n;
	cout<<"enter the number of elements in the array : ";
	cin>>n;
	int *arr=new int[n];
	//taking input for the array elements
	for(int i=0;i<n;i++){
		cin>>arr[i];//arr[i] = *(arr+i)
	}
	cout<<getSum(arr,n);
	
	//	difference between static and dynamic memory allocation
	//	https://www.geeksforgeeks.org/difference-between-static-and-dynamic-memory-allocation-in-c/
	
	
	//DELETE DYNAMICALLY ALLOCATED MEMORY
	 int *i=new int;//	deleting integer
	 delete i;
	 
	 int *arr1=new int[5];//deleteing array
	 delete []arr1;
}

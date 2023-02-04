//in the input all the array elements are in pair
//only one is unique ,find the unique

#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
	int count;
	for(int i=0;i<size;i++){
		count =0;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count =count+1;
			}
		}
		if(count==1){
			return arr[i];
		}
	}
}

int main(){
	int arr[10],n;
	cout<<"Enter the array length : ";
	cin>>n;
	cout<<"Enter the array elements (input must contain only one unique): "<<endl;
	for(int i=0;i<n;i++){
		cout<<"element "<<i+1<<"  :";
		cin>>arr[i];
	}
	cout<<"Unique element is : "<<findUnique(arr,n);
	
}

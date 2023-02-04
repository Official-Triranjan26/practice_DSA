#include<iostream>
using namespace std;

//process_1
//int main(){
//	int arr[]={1,2,3,4,5,6};
//	for(int i=0;i<3;i++){
//		int temp=arr[5-i];
//		arr[5-i]=arr[i];
//		arr[i]=temp;
//	}
//	for(int j=0;j<6;j++){
//		cout<<arr[j]<<endl;
//	}
//	return 0;
//}


//process_2
//int main(){
//	int arr[10],n,i;
//	cout<<"Enter the size of the array : "<<endl;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cout<<"element "<<i+1<<"  :";
//		cin>>arr[i];
//	}
//	
////	i=0;
//	for(i=0;i<(n/2);i++){
//		int temp=arr[n-1-i];
//		arr[n-1-i]=arr[i];
//		arr[i]=temp;
//		cout<<arr[i]<<"  ";
//		cout<<arr[n-1-i]<<"  "<<endl;
//	}
//	for(int j=0;j<n;j++){
//		cout<<arr[j]<<"  ";
//	}
//	
//}


//process_3

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<"  ";
	}
}

void reverseArray(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	printArray(arr,size);
}

int main(){
	int arr[10],n;
	cout<<"Enter the array length : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"element "<<i+1<<" :";
		cin>>arr[i];
	}
	reverseArray(arr,n);
}

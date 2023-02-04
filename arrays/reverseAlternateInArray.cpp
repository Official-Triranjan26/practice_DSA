#include<iostream>
using namespace std;
void printArray(int arr[],int size){
	for (int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

//int main(){
//	int i, arr[10]={1,2,3,4,5};
//	while(i<4){
//		swap(arr[i],arr[i+1]);
//		i=i+2;
//	}
//	printArray(arr,5);
//	return 0;
//}

void reverseAlternete(int arr[],int size){
	int i;
	while(i+1<size){
		swap(arr[i],arr[i+1]);
		i=i+2;
	}
}

int main(){
	int arr[10],n;
	cout<<"Enter the array length : ";
	cin>>n;
	cout<<"Enter the array elements : "<<endl;
	for(int i=0;i<n;i++){
		cout<<"element "<<i+1<<"  :";
		cin>>arr[i];
	}
	reverseAlternete(arr,n);
	printArray(arr,n);
}

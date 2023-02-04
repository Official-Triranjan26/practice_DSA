#include<iostream>
using namespace std;

//int main(){
//	int arr[5]={3,2,5,7,1};
//	int max=arr[0];
//	int min=arr[0];
//	for(int i=0;i<5;i++){
//		if(arr[i]>max){
//			max=arr[i];
//		}
//		if(arr[i]<min){
//			min=arr[i];
//		}
//	}
//	cout<<"max :"<<max<<endl;
//	cout<<"min : "<<min<<endl;
//}
struct {
  int max;
  int min;
} myStructure;

void determineMaxMin(int arr[],int size){
	int max=arr[0];
	int min=arr[0];
	
	for(int i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	myStructure.max=max;
	myStructure.min=min;
}


int main(){
	int n ,arr[n];
	cout<<"Enter the length of the array :"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array onr by one :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"element "<<i<<"  :";
		cin>>arr[i];
		cout<<endl;
	}
	determineMaxMin(arr,n);
	cout<<"max element :"<<myStructure.max<<endl;
	cout<<"min element: "<<myStructure.min<<endl;
}

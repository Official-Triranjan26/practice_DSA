#include<iostream>
using namespace std;

//int main(){
//	int n,arr[100],sum=0;
//	cout<<"enter the array length :";
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cout<<"element  "<<i+1<<" :";
//		cin>>arr[i];
//	}
//	for(int j=0;j<n;j++){
//		sum=sum+arr[j];
//	}
//	cout<<"sum :"<<sum<<endl;
//}

int sumOfAllElements(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	int n,arr[100],sum=0;
	cout<<"enter the array length :";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"element  "<<i+1<<" :";
		cin>>arr[i];
	}
	cout<<"sum : "<<sumOfAllElements(arr,n);
	
}

#include<iostream>
using namespace std;

//int peakOfMountain(int arr[],int n){
//	for(int i=1;i<n-1;i++){
//		if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
//			return arr[i];
//		}
//	}
//}

int peakOfMountain(int arr[],int n){
	int s=0,e=n-1,ans;
	int m=(s+e)/2;
	while(s<e){
		if(arr[m]<arr[m+1]){
			s=m+1;
		}
		else{
			e=m;
		}
		m=s+(e-s)/2;
	}
	return s;
}


int main(){
	int arr[]={1,2,3,7,4,3};
	cout<<"Peak element index : "<<peakOfMountain(arr,6);
	return 0;
}

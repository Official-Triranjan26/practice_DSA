#include<iostream>
#include <vector>
using namespace std;
		
int firstOccerance(int arr[],int n,int k){
	int ans=-1;
	int s=0;
	int e=n-1;
	int m=(s+e)/2;
	while(e>=s){
		if(k==arr[m]){
			ans=m;
			e=m-1;
		}
		else if(k>arr[m]){
			s=m+1;
		}
		else if(k<arr[m]){
			e=m-1;
		}
		m=(s+e)/2;
	}
	return ans;
}
int lastOccerance(int arr[],int n,int k){
	int ans=-1;
	int s=0;
	int e=n-1;
	int m=(s+e)/2;
	while(e>=s){
		if(k==arr[m]){
			ans=m;
			s=m+1;
		}
		else if(k<arr[m]){
			e=m-1;
			
		}
		else if(k>arr[m]){
			s=m+1;
		}
		m=(s+e)/2;
	}
	return ans;
}

int main(){cout<<"hello"<<endl;
	int arr[] ={1,2,3,3,3,3,5};
	int k=5,n=7;
	cout<<"First occrance : "<<firstOccerance( arr,n,k)<<endl;
	cout<<"last occrance : "<<lastOccerance( arr,n,k)<<endl;
	
	return 0;
}

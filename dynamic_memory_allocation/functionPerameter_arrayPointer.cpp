#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr,int n){//passing the address 710
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];//arr[i]=*(arr+i)
	}
	return sum;
}

int main(){
	int arr[10]={1,2,3,4,5};
	cout<<getSum(arr,5)<<endl;//arr--->710
	cout<<arr;
}

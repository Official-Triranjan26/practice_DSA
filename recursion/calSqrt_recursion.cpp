#include<bits/stdc++.h>
using namespace std;

int calSqrt(int n,int low,int high){
	int mid=(high+low)/2;
	cout<<mid<<endl;
//	base case
//	if(low>high){
//		return -1;
//	}
	if(mid*mid==n){
		cout<<"mid : "<<mid<<endl;
		return mid;
	}
	
//	recursive relation
	if(mid*mid>n){
		calSqrt(n,low,mid-1);
	}
	if(mid*mid<n){
		calSqrt(n,mid+1,high);
	}
}

int main(){
	int n=64;
	int sqrt=calSqrt(n,0,n);
	cout<<"Sqrt. of "<<n<<" is : "<<sqrt<<endl;
}


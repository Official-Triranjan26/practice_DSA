#include<iostream>
using namespace std;
int calculateSqrt(int n){
	int s=0;
	int e=n;
	int m=(s+e)/2;
	int ans=-1;
	
	
	while(s<=e){
		int squre=m*m;
		if(squre==n){
			return m;
		}
		else if(squre>n){
			e=m-1;
		}
		else{
			ans=m;
			s=m+1;
		}
		m=(s+e)/2;	
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<calculateSqrt(n);
	
}

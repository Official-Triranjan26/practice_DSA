//calculate perfect sqrt of given integer

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

double perfectSqrt(int n, int precision,int tempSol){
	double factor=1;
	double ans=tempSol;
	for(int i=0;i<precision;i++){
		factor=factor/10;
		for(double j=ans;j*j<n;j=j+factor){
			ans=j;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<endl;
	int tempSol=calculateSqrt(n);
	cout<<"Sqrt of "<<n<<" is : "<<perfectSqrt(n,3,tempSol);
	
}

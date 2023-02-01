//calculate nCr for given n and r

#include<iostream>
using namespace std;
int fact(int num){
	int i,ans=1;
	for (i=1;i<=num;i++){
		ans=ans*i;
	}
	return ans;
	
}

int nCr(int n, int r){
	int fact_n,fact_r,fact_n_r;
	float ans1;
	int nu = fact(n);
	int dnom = fact(r)*fact(n-r);
	return nu/dnom;
}

int main(){
	int a,b,ans;
	cout<<"Enter n and r accordingly ; "<<endl;
	cin>>a>>b;
	
	ans=nCr(a,b);
	cout<<"Answer is : "<<ans<<endl;
}

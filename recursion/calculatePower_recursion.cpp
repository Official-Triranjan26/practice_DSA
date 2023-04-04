#include<bits/stdc++.h>
using namespace std;
int calPower(int base,int exponent){
	int ans=1;
	//base case
	if(exponent==0){
		return 1;
	}
	//recursive relation
	ans=base*calPower(base,exponent-1);
	return ans;
}

int calculatePower(int base,int exponent){
	//base case
	if(exponent==0){
		return 1;
	}
	if(exponent==1){
		return base;
	}
	//processing
	int ans=calculatePower(base,exponent/2);
	if(exponent%2==0){
		return ans*ans;
		
	}
	else{
		return base*ans*ans;
	}
}

int main(){
	int base=2,exponent=5;
	cout<<"result of calculating power when base "<<base<<" and exponent "<<exponent<<" is "<<calPower(base,exponent)<<endl;
	int base2=2,exponent2=5;
	cout<<"result of calculating power when base "<<base2<<" and exponent "<<exponent2<<" is "<<calculatePower(base2,exponent2)<<endl;
	
	
}

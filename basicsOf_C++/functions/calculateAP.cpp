#include<iostream>
using namespace std;

int calculateAP(int n){
	int ans=(3*n)+7;
	return ans;
}

int main(){
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	cout<<"calculated AP : "<<calculateAP(n)<<endl;
}

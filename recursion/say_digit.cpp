//say digit
//input-->340
//output-->three four zero

#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n){
	//base case
	if(n==0){
		return;
	}
	//processing
	string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int digt=n%10;
	n=n/10;
	sayDigit(n);
	cout<<arr[digt]<<" ";
}

int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
	sayDigit(num);
	
}

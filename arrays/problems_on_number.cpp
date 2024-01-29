# include<bits/stdc++.h>
using namespace std;

string detectNumber(int num){
	if(num%10==5){
		string str="five";
		return str;
	}
	if(num%10==0){
		string str="zero";
		return str;
	}
	if(num%2==0){
		return "even";
	}
	if(num%2!=0){
		return "odd";
	}
}

int main(){
	string result=detectNumber(123);
	cout<<"result: "<<result<<endl;
	
}

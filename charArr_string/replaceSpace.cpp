#include<bits/stdc++.h>
using namespace std;

string replaceSpace(string s){
	string s2="";
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			s2.push_back('@');
			s2.push_back('4');
			s2.push_back('0');
		}
		else{
			s2.push_back(s[i]);
		}
	}
	return s2;
}

int main(){
	string s="hello world ok";
	cout<<"replaced string : "<<replaceSpace(s)<<endl;
}

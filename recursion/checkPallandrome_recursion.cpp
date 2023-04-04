#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s,int start,int end){
	//base case
	if(start>end){
		return true;
	}
	if(s[start]!=s[end]){
		return false;
	}
	//processing
	start+=1;
	end-=1;
	
	//recursive relation
	isPallindrome(s,start,end);
}

int main(){
	string s1="aabbaa";
	if(isPallindrome(s1,0,s1.length()-1)){
		cout<<"s1 is a pallindrome !"<<endl;
	}
	else{
		cout<<"s1 is not a pallindrome !!"<<endl;
	}
	cout<<endl;
	
	
	string s2="abcde";
	if(isPallindrome(s2,0,s2.length()-1)){
		cout<<"s2 is a pallindrome !"<<endl;
	}
	else{
		cout<<"s2 is not a pallindrome !!"<<endl;
	}
	
	
}

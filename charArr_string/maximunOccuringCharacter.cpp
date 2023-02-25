#include<bits/stdc++.h>
using namespace std;

char maximumOccurringCharacte(string s){
	int arr[26]={0};
	for(int i=0;i<s.length();i++){
		int number = s[i]-'a';
		arr[number]++;
	}
	int max=0,index=0;
	for(int j=0;j<26;j++){
	 	if(arr[j]>max){
	 		index=j;
	 		max=arr[j];
		 }
 	}
 	char maxChar='a'+index;
 	return maxChar;
 	
	
}

int main(){
	string s="Triranjan";
	cout<<s<<endl;
	cout<<"Maximum occuring character is : "<<maximumOccurringCharacte(s);
}

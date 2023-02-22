#include<iostream>
using namespace std;
int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
}

bool checkPalindrome(char arr[],int len){
	int s=0,e=len-1,count=0;
	while(s<e){
		if(arr[s]==arr[e]){
			s+=1;
			e-=1;
			count+=1;
		}
		else{
			break;
		}
	}
	if(count==(len/2)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	char arr[20]={'a','b','c','b','a'};
	int len=getLength(arr);
	if(checkPalindrome(arr,len)){
		cout<<"it is a palindrome !!"<<endl;
	}
	else{
		cout<<"not a palindrome !!"<<endl;
	}
		

	
}

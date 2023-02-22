#include<bits/stdc++.h>
#include<array>
using namespace std;

int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
}

char arr2[20]={};
void cleanString(char arr1[],int len){
	for (int i=0;i<len;i++){
		if(int(arr1[i])>=65 &&int(arr1[i])<=90){
			arr2.at(i)=tolower(arr1[i]);
		}
		else if(int(arr1[i])>=97 && int(arr1[i])<=122){
			arr2.at(i)=arr1[i];
		}
	}	
}

int main(){
	char arr[20]={'a','@',' ','A','a'};
	int len=getLength(arr);
	cout<<arr2;
}

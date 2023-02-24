#include<bits/stdc++.h>
//#include<array>
using namespace std;

char toLowerCase(char a){
	if(a>='a'&& a<='z'){
		return a;
	}
	else{
		char temp=a-'A'+'a';
		return temp;
	}
}

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
	int count=0;
	for(int i=0;i<len;i++){
		if(isalnum(arr1[i])){
			if(int(arr1[i])>=65 &&int(arr1[i])<=90){
			arr2[count]=toLowerCase(arr1[i]);
			count+=1;
			}
			else if(int(arr1[i])>=97 && int(arr1[i])<=122){
				
				arr2[count]=arr1[i];
				count+=1;
			}
		}
	}
}

int main(){
	char arr[20]={'A','b',' ','b','a'};
	int len=getLength(arr);
	cleanString(arr,len);
	cout<<endl;
	cout<<arr2;
}

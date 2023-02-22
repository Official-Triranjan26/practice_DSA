#include<bits/stdc++.h>
using namespace std;

//string is one dimentional character array 
//when we are assing values to a character array 
//,after iniatialization a null character is assigned to that array as its last element
//while printing the elements of a char array , cout skips the elements after null character
//null character ---> '\0'
int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
	
}

void reverseString(char arr[],int len){
	int s=0;
	int e=len-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}

int main(){
	char name[20];
	cout<<"Enter your name : ";
	cin>>name;
	cout<<name<<" is learning C++ "<<endl;
//	name[2]='\0';
//	cout<<name;
	int len=getLength(name);
	cout<<"length of your name is "<<len<<endl;
	reverseString(name,len);
	cout<<"reverse of your name is "<<name;
}

//REVERSE STRING USING RECURSION

#include<bits/stdc++.h>
using namespace std;

//METHOD1
void reverseString(char arr[],int size){
	//	base case
	if(size==0){
		return;
	}
	//recursive relation
	cout<<arr[size-1];
	reverseString(arr,size-1);	
}

//METHOD2
void reversEstring(string& s,int start,int end){
	//	base case
	if(start>end){
		return;
	}
	// processing
	
	swap(s[start],s[end]);
	start+=1;
	end-=1;
	
	cout<<start<<" "<<end<<" "<<s<<endl;
	
	// recursive relation
	reversEstring(s,start,end);
	
}

int main(){
	//case 1
	char arr[]={'b','a','b','b','a','r'};
	cout<<"original string : "<<arr<<endl;
	cout<<"string after reverse : ";
	reverseString(arr,6);
	cout<<endl<<endl;
	
	//case 2
	string s="abcde";
	int start=0;
	int end=s.length()-1;
	cout<<"string before : "<<s<<endl;
	cout<<"intermedeate steps---->"<<endl;
	reversEstring(s,start,end);
	cout<<"string after : "<<s<<endl;
}

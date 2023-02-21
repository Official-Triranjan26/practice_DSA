#include<iostream>
#include<array>
//#include<bits/stdc++.h>
using namespace std;

/*
	initialize an array -->array<int,4> arr={1,3,2,4};
	int size=arr.size();//size of array
	arr.at(2);//element at index 2
	arr.front();//first element of arr
	arr.back();//last element of arr
	arr.empty();//returns boonean true/fulse
*/

int main(){
	int basic[3]={1,2,3};//normal iniatialization
	array <int,4> arr={5,6,7,8}; //iniatialization through stl
	cout<<"size if array is : "<<arr.size()<<endl;
	cout<<"elemeny=t at index 2 "<<arr.at(2)<<endl;
	cout<<"first element : "<<arr.front()<<endl;
	cout<<"last emenent : "	<<arr.back()<<endl;
	cout<<"empty of not : "<<arr.empty() <<endl;	
}

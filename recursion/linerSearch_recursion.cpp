#include<bits/stdc++.h>
using namespace std;


//	TRAVERSING FROM LAST-->FIRST
//int linearSearch(int arr[],int size,int searchElement){
////	int start=0;
//	//base case
//	if(size==0){
//		return -1;
//	}
//	if(searchElement==arr[size-1]){
//		return size-1;
//	}
//	
//	//recursive relation
////	cout<<start<<endl;
//	linearSearch(arr,size-1,searchElement);
//	
//}


//	TRAVERSING FROM FIRST-->LAST
bool linearSearch(int arr[],int size,int searchElement){
	//base case
	cout<<*arr<<endl;
	if(size==0){
		return false;
	}
	if(arr[0]==searchElement){
		return true;
	}
	//recursive relation
	
	linearSearch(arr+1,size-1,searchElement);

}

int main(){
	int arr[10]={1,2,3,6,5};
	if(linearSearch(arr,5,5)){
		cout<<"found !!"<<endl;
	}
	else{
		cout<<"Not found!"<<endl;
	}
	
}

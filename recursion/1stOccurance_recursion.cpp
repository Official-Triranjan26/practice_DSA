#include<bits/stdc++.h>
using namespace std;

int get1stOccurance(int arr[],int size,int element,int start,int end){

	int mid=(start+end)/2;
//	cout<<start<<" "<<end<<" "<<mid<<" "<<ans<<endl;
	
//	base case
	if(start>=end){
		cout<<"mid"<<mid<<endl;
		return mid;
	}
//	processing
	if(arr[mid]==element){
		cout<<"hello"<<endl;
//		ans=mid;
		get1stOccurance(arr,size,element,start,mid-1);
//		end=mid-1;
	}
//	recursive relation
	if(arr[mid]>element){
		get1stOccurance(arr,size,element,start,mid-1);
	}
	else if(arr[mid]<element){
		get1stOccurance(arr,size,element,mid+1,end);
	}
//	cout<<start<<" "<<end<<" "<<mid<<" "<<ans<<endl;
}

int main(){
	int arr[10]={11,12,13,13,14,14,14,15};
	cout<<"first occurance : " <<get1stOccurance(arr,8,12,0,7);
}

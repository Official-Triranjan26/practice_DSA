#include<iostream>
using namespace std;

int search(int arr[],int size,int searchElement){
	int index;
	for(int i=0;i<size;i++){
		if(searchElement==arr[i]){
			index=i;
			return index;
		}
	}
	return 0;
}

int main(){
	int arr[100],n,searchElement;
	cout<<"Enter the array length : "<<endl;
	cin>>n;
	cout<<"Enter the search element : "<<endl;
	cin>>searchElement;
	
	for(int i=0;i<n;i++){
		cout<<"element "<<i+1<<" :";
		cin>>arr[i];
	}
	int result=search(arr,n,searchElement);
	if(result==0){
		cout<<"Search element not found !!"<<endl;
		exit(0);
	}
	cout<<"Search element found on index:"<<result<<endl;
	

}

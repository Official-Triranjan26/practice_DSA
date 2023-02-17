#include<iostream>
using namespace std;

calculateSqrt(int arr[],int size){
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	int ans;
	
	while(start<=end){
		int sqrt=arr[mid]*arr[mid];
		if( sqrt==arr[size-1]){
			return arr[mid];
		}
		else if(sqrt>arr[size-1]){
			end=mid-1;
			if(ans*ans<sqrt){
				return ans;
				
			}
		}
		else{
			ans=arr[mid];
			start=mid+1;
		}
		mid=(start+end)/2;
	}
}
void printArray(int arr[],int size){
	for(int i=1;i<=size ;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	int arr[100],n;
	cin>>n;
	for (int i=1;i<=n;i++){
		arr[i]=i;
	}
	printArray(arr,n);
	cout<<"Sqrt of "<<n<<" is "<<calculateSqrt(arr,n);
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3],int r,int c){
	int largest=0;
	int larRow=0;
	cout<<"Row wise sum --> "<<endl;
	for(int row=0;row<r;row++){
		int sum=0;
		for(int col=0;col<c;col++){
			sum=sum+arr[row][col];
		}
		if(largest==0){
			largest=sum;
			larRow=row;
		}
		if(sum>largest){
			largest=sum;
			larRow=row;
		}
		cout<<"sum of row "<<row<<" is "<<sum<<endl;
//		cout<<larRow<<endl;
	}
	cout<<"-----------------------------------"<<endl;
	cout<<"maximum sum is : "<<largest<<endl;
	return larRow;
}

int main(){
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	cout<<"Largest sum in row --> "<<largestRowSum(arr,3,3)<<endl;
}

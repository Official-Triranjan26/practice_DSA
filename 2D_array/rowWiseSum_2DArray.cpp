#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3];
	//	taking input to 2D array(row wise)
	cout<<"Enter the elements of the 2D array ( for row wise):  "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cin>>arr[row][col];
		}
	}
	
	//	printing 2D array
	cout<<"The 2D array is --> "<<endl;
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout<<arr[row][col]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Row wise sum --> "<<endl;
	for(int row=0;row<3;row++){
		int sum=0;
		for(int col=0;col<3;col++){
			sum=sum+arr[row][col];
		}
		cout<<"sum of row "<<row<<" is "<<sum<<endl;
	}
}

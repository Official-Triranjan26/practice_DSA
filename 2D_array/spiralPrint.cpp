#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][4],int row, int col){
	
	//initializeing the index
	
	int startingRow=0;
	int startingCol=0;
	int endingRow=row-1;
	int endingCol=col-1;
	int totalElement=row*col;
	int count=0;
	
	while(count<totalElement){
		//	starting row
		for(int i=startingCol;i<=endingCol && count<totalElement;i++){
			cout<<arr[startingRow][i]<<" ";
			count+=1;
		}
		startingRow++;
		cout<<"---> ";
		
		//	ending col
		for(int i=startingRow;i<=endingRow && count<totalElement;i++){
			cout<<arr[i][endingCol]<<" ";
			count+=1;
		}
		endingCol--;
		cout<<"---> ";
		
		//	ending row
		for(int i=endingCol;i>=startingCol  && count<totalElement;i--){
			cout<<arr[endingRow][i]<<" ";
			count+=1;
		}
		endingRow--;
		cout<<"---> ";
		//	starting col
		for(int i=endingRow;i>=startingRow  && count<totalElement;i--){
			cout<<arr[i][startingCol]<<" ";
			count+=1;
		}
		startingCol++;
	}
	
}

int main(){
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	spiralPrint(arr,4,4);
	
}

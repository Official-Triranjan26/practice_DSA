#include<iostream>
#include<vector>
using namespace std;

/*
declare vector --> 	vector<int> arr;
					vector<int> arr(5,1)--->vector of size 5 and initialize all element with 1
	arr.push_back(2)
	arr.pop_back()
	arr.front()
	arr.back()
	arr.capasity()
	arr.size()
	
*/

void printVector(vector<int> arr){
	int n=arr.size();
	cout<<" Array ---> ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main(){
	vector<int> arr;
	arr.push_back(1);
	cout<<" size     : "<<arr.size()<<endl;
	cout<<" capacity : "<<arr.capacity()<<endl;
	printVector(arr);
	
	arr.push_back(2);
	cout<<" size     : "<<arr.size()<<endl;
	cout<<" capacity : "<<arr.capacity()<<endl;
	printVector(arr);
	
	arr.push_back(3);
	cout<<" size     : "<<arr.size()<<endl;
	cout<<" capacity : "<<arr.capacity()<<endl;
	printVector(arr);
	
	
	cout<<"front -->"<<arr.front()<<endl;
	cout<<"back --->"<<arr.back()<<endl;
	cout<<"--------------------------------------"<<endl;
	
	arr.capacity();
	arr.size();
	arr.pop_back();
	
	
}

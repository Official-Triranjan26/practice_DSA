//greater between two
//entered number is positive / negative or zero

# include<iostream>
using namespace std;

int main(){
//	//greater between two
//	int a,b;
//	cout<<"Enter the value of A :"<<endl;
//	cin>>a;
//	cout<<"Enter the value of B : "<<endl;
//	cin>>b;
//	if(a>b){
//		cout<<"A  is greater !!"<<endl;
//	}
//	else if(b>a){
//		cout<<"B  is greater!!"<<endl;
//	}
//	else
//	{
//		cout<<"A and B are same !!"<<endl;
//	}
//	return 0;
	
	//entered number positive /negetive or zero
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n>0){
		cout<<n<<"  is positive";
	}
	else if(n<0){
		cout<<n<<"  is negative";
	}
	else{
		cout<<n<< "  is 0";
	}
	
}

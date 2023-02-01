 #include<iostream>
 using namespace std;
 int main(){
 	
// 	//print 0 to n
// 	int n,i=1;
// 	cout<<" enter the number till which u want to print : ";
// 	cin>>n;
// 	while(i<=n){
// 		cout<<i<<endl;
// 		i=i+1;
//	 }
//------------------------------------------
//	//add 0 to n & print the result
//	int n,i=0,sum=0;
//	cout<<"enter till where u want to add : ";
//	cin>>n;
//	while(i<=n){
//		sum=sum+i;
//		i=i+1;
//	}
//	cout<<"result of addion "<<sum<<endl;
//----------------------------------------	
	//from 0 to n print all the even numbers
	
	int n,i=0;
	cout<<"Enter the upper range : ";
	cin>>n;
	
	while(i<n){
		if(i%2==0){
			cout<<i<<endl;
		}
		i=i+1;
	}
 	
// 	//is prime?
// 	int n,i=2;
// 	int flag=0;
// 	cout<<"Enter the number : ";
// 	cin>>n;
// 	while(i<n){
// 		if(n%i==0){
// 			flag=1;
// 			break;
//		 }
//		 i=i+1;
//	 }
//	 if(flag==0){
//	 	cout<<"entered number is prime !!";
//	 }
//	 else{
//	 	cout<<"entered number is not prime !!";
//	 }
	 return 0;
 }

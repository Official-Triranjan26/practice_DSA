//count the number of bit " 1 " in a binary representation
// of a given decimal number

#include<iostream>
using namespace std;
int n=100;

int main(){
	
	int n;
	cout<<"Enter the decimal number : "<<endl;
	cin>>n;
	int count=0;
    	while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
    cout<<"Number of 1 bits : "<<count;
    

}


//output :
//Enter the decimal number :
//15
//Number of 1 bits : 4

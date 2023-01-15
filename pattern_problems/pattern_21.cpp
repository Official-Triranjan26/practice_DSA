//pattern_21

//1 2 3 4 4 3 2 1
//1 2 3 * * 3 2 1
//1 2 * * * * 2 1
//1 * * * * * * 1

//j=n-i+1
//star=i-1
#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout<<j<< " ";
			j=j+1;
		}
		int star_1=i-1;
		while(star_1){
			cout<<"* ";
			star_1=star_1-1;
		}
		int space_2=i-1;
		while(space_2){
			cout<<"* ";
			space_2=space_2-1;
		}
		int start=n-i+1;
		while(start){
			cout<<start<< " ";
			start=start-1;
		}
		
		cout<<endl;
		i=i+1;
	}
	
}

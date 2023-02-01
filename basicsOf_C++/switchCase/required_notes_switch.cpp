//take an amount from the user and determine how many notes of 100,50,20 and 1 are required in this case(H W)


#include<iostream>
using namespace std;

int main(){
	int count=1;
	int amount;
	int note1,note2,note3,note4;
	cout<<"Enter the amount: "<<endl;
	cin>>amount;
	
	switch(1){
		case 1:note1=amount/100;
				if(note1>0){
					cout<<"Number of 100 rs note : "<<note1<<endl;
				}
				amount=(amount%100);
		case 2:note2=amount/50;
				if(note2>0){
					cout<<"Number of 50 rs note : "<<note2<<endl;
				}
				amount=(amount%50);
		
		case 3:note3=amount/20;
				if(note3>0){
					cout<<"Number of 20 rs note : "<<note3<<endl;
				}
				amount=(amount%20);
		
		case 4:note4=amount/1;
				if(note4>0){
					cout<<"Number of 100 rs note : "<<note4<<endl;
				}
	}
}

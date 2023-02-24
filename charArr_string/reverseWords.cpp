#include<bits/stdc++.h>
//#include<array>
using namespace std;
int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
}
void reverseString(char s[],int start,int end) {
        int len=getLength(s);
        int st=start;
        int e=end;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
//      cout<<'   ';
    }
    
void reverseWord(char s[]){
	int start=0;
	int len=getLength(s);
	int temp=start;
	int count =0;
	while(start<=len){
		
		if(s[start]==' ' || s[start]=='\0'){
			reverseString(s,temp,start-1);
			temp=start+1;
			start+=1;
			count+=1;
		}
		start+=1;
	}
	start=0;
	if(count<1){
		reverseString(s,start,len-1);
	}
}

int main(){
	char s[]={'a','b',' ','a','d','b',' ','a','d','b',' ','a','d'};
	reverseWord(s);
	cout<<s<<endl;
}

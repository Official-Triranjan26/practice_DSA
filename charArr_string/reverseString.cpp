#include<bits/stdc++.h>
using namespace std;
int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
}

void reverseString(char s[]) {
        int len=getLength(s);
        int st=0;
        int e=len-1;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
int main(){
	char s[]={'a','b','a','d','b','a','d','b','a','d'};
	reverseString(s);
	cout<<s<<endl;
}

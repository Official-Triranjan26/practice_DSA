#include <bits/stdc++.h> 
using namespace std;
int getLength(char arr[]){
	int count=0,i=0;
	while(arr[i]!='\0'){
		count+=1;
		i+=1;
	}
	return count;
}

bool checkPalindrome(char s[]){
    int len =getLength(s);
    int start=0;
    int end=len-1;

    while(start<end){
        if(!isalnum(s[start])){
            start+=1;
        }
        else if(!isalnum(s[end])){
            end-=1;
        }
        else{
            if(tolower(s[start])==tolower(s[end])){
                start+=1;
                end-=1;
            }
            else{
                return false;
            }
        }

    }
    return true;
}

int main(){
	char s[]={'a','b','c','a','a'};
	if(checkPalindrome(s)){
		cout<<"Given string is palindrome !!";
	}
	else{
		cout<<"Not a palindrome !!";
	}
}

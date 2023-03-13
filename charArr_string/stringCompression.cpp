#include<bits/stdc++.h>
using namespace std;
 
 int compress(vector<char>& chars) {
        char arr[26]={0};
        for (int i=0;i<chars.size();i++){
            int number=chars[i]-'a';
            arr[number]++;
        }
        string s="";
        int j=0;
        while(j<chars.size()){
            if(s.length()==0){
                s.push_back(chars[j]);
                j++;
            }
            else if(s.back()!=chars[j]){
                int number=chars[j]-'a';
                s.push_back(arr[number]);
                j++;
            }
            else{
                j++;

            }
        }
        return s.length();
    }
    
    int main(){
    	vector<char>& chars={"a","a","b","b","c","c","c"};
    	cout<<compress<<endl;
	}

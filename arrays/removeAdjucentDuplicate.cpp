#include<bits/stdc++.h>
using namespace std;

//string removeDuplicates(string s) {
//       string ans = "";
//        for(int i = 0; i < s.length(); i++){
//            if(ans == ""){
//                ans.push_back(s[i]);
//            }
//            else if(ans.back()==s[i]){
//                ans.pop_back();
//            }
//            else{
//                ans.push_back(s[i]);
//            }
//        }
//        return ans;
//    }
    
    string removeDuplicates(string s) {
    	string ans="";
		for(int i=0;i<s.size();i++){
			for(int j=0;j<s.size();j++){
				if(ans==""){
					ans=ans+s[i];
				}
				else if(s[i]==s[j]){
					cout<<"ok"<<endl;
					continue;
				}
				else{
					ans=ans+s[i];
				}
			}
		}
		return ans;
	}
    int main(){
    	string  s = "azxxzy";
    	cout<<"After removing duplicates : "<<removeDuplicates(s)<<endl;
	}
	
	//run in programize 
	//output is ok	

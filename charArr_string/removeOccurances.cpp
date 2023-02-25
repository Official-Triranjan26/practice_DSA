#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){
//        	**logic
            s.erase(s.find(part),part.length());
        }
        return s;
    }
int main(){
	string s="okhellookgotok";
	string part="zz";
	cout<<removeOccurrences(s,part)<<endl;
}

//** logic :
	

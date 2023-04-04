//Count Ways To Reach The N-th Stairs

#include <bits/stdc++.h> 
using namespace std;
int countDistinctWays(int nStairs) {
    //base case
    if(nStairs==0){
        return 1;
    }
    if(nStairs<0){
        return 0;
    }
    //recursive relation

    int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}

int main(){
	int n=3;
	cout<<countDistinctWays(n);
	
}

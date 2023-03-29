#include<bits/stdc++.h>
using namespace std;

//INLINE FUNCTIONS : inline functions atre used to reduce function call overhead

//1 . Function call overhead doesn’t occur. 
//2 . It also saves the overhead of push/pop variables on the stack when a function is called. 
//3 . It also saves the overhead of a return call from a function. 
//4 . When you inline a function, you may enable the compiler to perform context-specific optimization on the body 
//    of the function. Such optimizations are not possible for normal function calls. Other optimizations can be 
//    obtained by considering the flows of the calling context and the called context. 
//5 . An inline function may be useful (if it is small) for embedded systems because inline can yield less code than the f
//	unction called preamble and return. 

//int getMax(int a, int b){//	normal function
//	return ((a>b)?a:b);
//}

int getMax(int& a, int& b){//	inline function
	return ((a>b)?a:b);
}

int main(){
	int a=5,b=10;
	cout<<"greater among this two : "<<getMax(a,b);
}

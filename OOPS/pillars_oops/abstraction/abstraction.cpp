// We can easily implement abstraction using the access specifiers

#include <bits/stdc++.h>
using namespace std;

class Abstraction {
private:
	int a, b;

public:
	// method to set values of
	// private members
	void set(int x, int y)
	{
		a = x;
		b = y;
	}

	void display()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	Abstraction obj;
	obj.set(10, 20);
	obj.display();
}
// in the above program we are not allowed to access the variables a and b directly, however, one can call the function set() to set the values in a and b and the function display() to display the values of a and b.

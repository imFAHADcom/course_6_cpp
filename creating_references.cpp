#include <iostream>

using namespace std;

int main(){
	int a = 10;

	int & x = a;

	cout << "Address momery a: " << &a << "\n";
	cout << "Address momery x: " << &x << "\n\n";


	cout << "a = " << a << "\n";
	cout << "x = " << x << "\n\n";

	// add 1 to x;
	++x;

	cout << "a after ++x = " << a << "\n";
	cout << "x = " << x << "\n\n";


	a = 20;
	cout << "a = " << a << "\n";
	cout << "x after edit a to 20 = " << x << endl;

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int number = 10;
	cout << "number variable value          = " << number << "\n";
	cout << "number variable momery address = " << &number << "\n";

	int *pNumber = &number;
	cout << "Pointer pa value               = " << pNumber << "\n";
	cout << "Pointer pa dereferenced value  = " << *pNumber << endl;


	string name = "Fahad";	
	cout << "\nname variable value          = " << name << "\n";
	cout << "name momery address            = " << &name << "\n";

	string *pName = &name;
	cout << "Pointer pn value               = " << pName << endl;
	cout << "Pointer pn dereferenced value  = " << *pName << endl;
	

	return 0;
}

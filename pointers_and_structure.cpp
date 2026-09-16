#include <iostream>

using namespace std;

struct stEmployee{
	string name = "";
	float salary = 0;
};

int main(){
	stEmployee employee;
	stEmployee* ptr = &employee;


	employee.name = "Fahad AlFahad";
	employee.salary = 2000;

	cout << employee.name << "\n";
	cout << employee.salary << "\n";

	cout << "\nPrint structure values using pointer: " << "\n";
	cout << ptr->name << "\n";
	cout << ptr->salary << "\n";

	cout << "\nPrint structure momery address using pointer:\n";
	cout << ptr << "\n";
	cout << ptr + 1 << endl;

	return 0;
}

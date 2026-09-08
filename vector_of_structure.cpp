#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct stEmployee{
	string firstName = "";
	string lastName = "";
	int salary = 0;
};




int main(){
	vector <stEmployee> v_Employee;

	stEmployee tempEmployee;

	tempEmployee.firstName = "Fahad";
	tempEmployee.lastName = "AlFahad";
	tempEmployee.salary = 1000;
	v_Employee.push_back(tempEmployee);


	tempEmployee.firstName = "Ahmed";
	tempEmployee.lastName = "AlAhmed";
	tempEmployee.salary = 2000;
	v_Employee.push_back(tempEmployee);


	tempEmployee.firstName = "Salem";
	tempEmployee.lastName = "AlSalem";
	tempEmployee.salary = 3000;
	v_Employee.push_back(tempEmployee);

	for(const stEmployee& employee : v_Employee){
		cout << "\nFirst Name: " << employee.firstName << "\n";
		cout << "Last Name: " << employee.lastName << "\n";
		cout << "Salary: " << employee.salary << "\n";
	}

	cout << endl;

	return 0;
}

/*
Write a Program to ask user to enter as many Employees as sh/he wants, each time an Employee entered add it to your vector and ask the user if sh/he wants to add more Employees until sh/he says No, then print all vector elements on the screen.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stEmployee{
	string firstName = "";
	string lastName = "";
	int salary = 0;
};


void readEmployee(vector <stEmployee>& v_Employee){

	stEmployee tempEmployee;
	char readMore = 'y';
	int counter = 1;

	do{

		cout << "\nEnter first name for employee " << counter << ": ";
		getline(cin, tempEmployee.firstName);

		cout << "Enter last name for employee " << counter << ": ";
		getline(cin, tempEmployee.lastName);

		cout << "Enter salary for employee " << counter << ": ";
		cin >> tempEmployee.salary;

		while(cin.fail()){

			cin.clear();
			cin.ignore(1000, '\n');

			cout << "Error, Enter salary again!: ";
			cin >> tempEmployee.salary;
		}	
	
		v_Employee.push_back(tempEmployee);


		cout << "You want add more employee info? Y/N: ";
		cin >> readMore;
		cin.ignore(1000, '\n');

		++counter;

	} while(readMore == 'y' || readMore == 'Y');

}


void printEmployeeInfo(const vector <stEmployee>& v_Employee){

		cout << "\n************************\n";
		cout << "Employee info:\n";

		for(const stEmployee& employee : v_Employee){
			cout << "\nFirst Name: " << employee.firstName << "\n";
			cout << "Last Name: " << employee.lastName << "\n";
			cout << "Salary: " << employee.salary << "\n";
		}
		cout << endl;

}


int main(){
	vector <stEmployee> v_Employee;

	readEmployee(v_Employee);

	printEmployeeInfo(v_Employee);



	return 0;
}

#include <iostream>

using namespace std;


int main(){
	int number = 10;
	cout << "number value = " << number << "\n";
	cout << "number address = " << &number << "\n";

	int* pNumber;
	pNumber = &number;
	cout << "\npNumber value (address stored) = " << pNumber << "\n";
	cout << "Value pointed to by pNumber = " << *pNumber << "\n";

	*pNumber = 20;
	cout << "\nnumber value after modifying through pointer = " << number << "\n";
	cout << "Value pointed to by pNumber = " << *pNumber << "\n";

	number = 30;	
	cout << "\nnumber value after modifying directly = " << number << "\n";
	cout << "Value pointed to by pNumber = " << *pNumber << "\n";

	return 0;
}

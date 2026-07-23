#include <iostream>
#include <limits>

using namespace std;

int readNumber(){

	int number = 0;

	cout << "Enter a number, Please? ";
	cin >> number;

	while(cin.fail()){

	// user didn't input a number
	cin.clear();
	cin.ignore(1000, '\n');
	// It can be used in this way
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Error, enter a number again? ";
	cin >> number;

	}

//So as not to affect the next input
	cin.ignore(1000, '\n');
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	return number;
}

int main(){

	cout << readNumber() << endl;

	return 0;
}

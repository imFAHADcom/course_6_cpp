/*

Write a Program to ask user to enter as many numbers as s/he wants, each time a number entered add it to your vector, and ask the user if s/he wants to add more numbers until s/he says No, then print all vector elements on the screen.

*/

#include <iostream>
#include <vector>

using namespace std;


void readNumbers(vector <int>& v_Numbers){

	char readMore;
	int num;

	do{

		cout << "Enter a number, Please? ";
		cin >> num;

		while(cin.fail()){

			cin.clear();
			cin.ignore(1000, '\n');

			cout << "Error, enter a number again? ";
			cin >> num;
		}

		v_Numbers.push_back(num);

		cout << "Do you want add more number? Y/N: ";
		cin >> readMore;
		cin.ignore(1000, '\n');

	} while(readMore == 'y' || readMore == 'Y');

}


void printVector(const vector <int>& v_Numbers){

	cout << "\nNumbers vector: \n";

	for(const int& number : v_Numbers){
	
		cout << number << "\n";
	}

	cout << endl;
}


int main(){
	vector <int> v_Numbers;

	readNumbers(v_Numbers);

	printVector(v_Numbers);

	return 0;
}


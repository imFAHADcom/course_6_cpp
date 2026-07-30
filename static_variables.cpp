#include <iostream>

using namespace std;


void function(){

	static int number = 1;

	cout << number << "\n";

	++number;

}


int main(){

	function();
	function();
	function();

	return 0;
}

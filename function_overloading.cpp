#include <iostream>

using namespace std;

int mySum(int a, int b){

	return a + b;
}


double mySum(double a, double b){

	return a + b;
}

int mySum(int a, int b, int c){

	return a + b + c;
}

int mySum(int a, int b, int c, int d){

	return a + b + c + d;
}


int main(){

	cout << mySum(10, 20) << "\n";
	cout << mySum(10.3, 20.2) << "\n";	
	cout << mySum(10, 20, 30) << "\n";
	cout << mySum(10, 20, 30, 40) << "\n";


	return 0;
}

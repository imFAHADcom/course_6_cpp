#include <iostream>

using namespace std;


void printNumbersUpToDown(int n, int m){


	if(n <= m){

		cout << n << "\n";
		printNumbersUpToDown(n + 1, m);
	}
}


void printNumbersDownToUp(int m, int n){

	if(m >= n){

		cout << m << "\n";
		printNumbersDownToUp(m - 1, n);
	}

}

int main(){
	cout << "Numbers from up to down:\n";
	printNumbersUpToDown(1, 10);

	cout << "\n********************\n\n";

	cout << "Numbers from Down to up:\n";
	printNumbersDownToUp(10, 1);

	return 0;
}

/*

Bitwirse OR operator

(12 | 25) = 29

12 decimal = 00001100 binary
25 decimal = 00011001 binary

00001100 
|
00011001
= 
00011101

convert from binary to decimal:
00011101 binary = 29 decimal


*/

#include <iostream>

using namespace std;

int main(){

	cout << "Result: " << (12 | 25);
	cout << endl;

	return 0;
}

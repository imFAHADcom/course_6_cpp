/*
bitwise AND operator

12 & 25 

12 binary is: 00001100
	&
25 binary is: 00011001
	=
	00001000

convert from binary to decimal:
00001000 binary = 8 decimal 

*/

#include <iostream>

using namespace std;
int main(){

	cout << "Result: " << (12 & 25); // Result: 8
	cout << endl;

	return 0;
}

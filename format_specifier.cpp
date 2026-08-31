/*
How to use format specifier %d
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n = 1, m = 49;

	printf("number is %d and %d \n", n, m); // number is 1 and 49 
	printf("number is %0*d \n", 2, n); // number is 01 
	printf("number is %0*d \n", 3, n); // number is 001
	printf("number is %0*d \n", 4, n); // number is 0001

	int num1 = 2, num2 = 4;

	printf("result %d + %d = %d \n", num1, num2, num1 + num2); // result 2 + 4 = 6

	return 0;
}

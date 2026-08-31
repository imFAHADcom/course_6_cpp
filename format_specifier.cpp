/*
How to use format specifier %d
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n = 1, m = 49;

	printf("number is %d and %d \n", n, m);
	printf("number is %0*d and \n", 2, n);
	printf("number is %0*d and \n", 3, n);
	printf("number is %0*d and \n", 4, n);

	int num1 = 2, num2 = 4;

	printf("result %d + %d = %d \n", num1, num2, num1 + num2);

	return 0;
}

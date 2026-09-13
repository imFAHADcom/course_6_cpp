#include <iostream>

using namespace std;

// swapping function with reference
void swapRef(int& num1, int& num2){

	int temp = num1;
	num1 = num2;
	num2 = temp;

}


// swapping function with pointer
void swapPtr(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


int main(){
	int a = 1, b = 2;

	cout << "a before swapping: " << a << "\n";
	cout << "b before swapping: " << b << "\n";
	
	swapRef(a, b);

	cout << "\na after swapping using reference: " << a << "\n";
	cout << "b after swapping using reference: " << b << "\n";

	swapPtr(&a, &b);

	cout << "\na after swapping using pointers: " << a << "\n";
	cout << "b after swapping using pointers: " << b << "\n";

	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int array[4] = {10, 20, 30, 40};
	int* ptr = array;

	//ptr is equivalent to &array[0];
	//ptr + 1 is equivalent to &array[1];
	//ptr + 2 is equivalent to &array[2];
	//ptr + 3 is equivalent to &array[3];


	cout << ptr << "\n";
	cout << ptr + 1 << "\n";
	cout << ptr + 2 << "\n";
	cout << ptr + 3 << "\n\n";


	cout << *(ptr) << "\n";
	cout << *(ptr + 1) << "\n";
	cout << *(ptr + 2) << "\n";
	cout << *(ptr + 3) << endl;
	
	cout << "\nPrint array with loop:\n";
	for(int i = 0; i < 4; ++i){
		cout << *(ptr + i) << "\n"; 
	};
	cout << endl;

	return 0;
}

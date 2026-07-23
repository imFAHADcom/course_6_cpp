#include <iostream>
#include <string>

using namespace std;

int main(){
	int array1[] = {1, 2, 3, 4, 5,};


	for(int n : array1){
	
		cout << n << "\n";
	}

	cout << "*******\n";

	for(int b : {9, 2, 3,7}){

		cout << b << "\n";
	}

	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int size = 0;

	cout << "Enter total number of students? ";
	cin >> size;

	while(cin.fail() || size <= 0){
		
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000,'\n');
		}

		cout << "Error, Enter a positive number of students: ";
		cin >> size;
	}

	// momery allocation of num numbers of floats
	float* ptr = new float[size];

	
	cout << "\nEnter grades of students.\n";
	for(int i = 0; i < size; ++i){
		cout << "Student " << i + 1 << ": ";
		cin >> *(ptr + i);

		while(cin.fail() || *(ptr + i) <= 0){
		
			if(cin.fail()){	
				cin.clear();
				cin.ignore(1000,'\n');
			}

			cout << "Error, enter a grade between 0 and 100 for student " << i + 1 << ": ";
			cin >> *(ptr + i);
		}

	}

	cout << "\nDisplaying grades of students.\n";
	for(int j = 0; j < size; ++j){
		cout << "Studient " << j + 1 << ": ";
		cout << *(ptr + j) << "\n";
	}

	// ptr memory is reseased
	delete[] ptr;
	ptr = nullptr;

	return 0;
}

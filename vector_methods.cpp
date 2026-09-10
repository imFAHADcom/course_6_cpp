#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> v_Numbers;

	v_Numbers.push_back(10);
	v_Numbers.push_back(20);
	v_Numbers.push_back(30);
	v_Numbers.push_back(40);
	v_Numbers.push_back(50);


	cout << "\nFirst number in vector: " << v_Numbers.front() << "\n";
	cout << "Last number in vector: " << v_Numbers.back() << "\n";

	// returns the number of elements present in the vector 
	cout << "Size: " << v_Numbers.size() << "\n";

	// check the overall size of a vector
	cout << "Capacity: " << v_Numbers.capacity() << "\n";
	
	// returns 1 (true) if the vector is empty
	cout << "Empty 0 is False, 1 is True: " << v_Numbers.empty() << endl;

	return 0;
}

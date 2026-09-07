#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> v_Numbers = {10, 20, 30, 40, 50};

	cout << "Numbers vector = ";

	for(int& numbers : v_Numbers){
		cout << numbers << " ";
	}

	cout << endl;

	return 0;
}

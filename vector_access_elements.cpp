#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> num{10, 20, 30, 40, 50};

	cout << "\nUsing .at(i)\n";
	cout << "Element at Index 0:" << num.at(0) << "\n";
	cout << "Element at Index 2:" << num.at(2) << "\n";
	cout << "Element at Index 4:" << num.at(4) << "\n";

	cout << "\nUsing [i]\n";
	cout << "Element at Index 0:" << num[0] << "\n";
	cout << "Element at Index 2:" << num[2] << "\n";
	cout << "Element at Index 4:" << num[4] << endl;

	return 0;
}

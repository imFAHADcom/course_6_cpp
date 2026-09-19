#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> num{1, 2, 3, 4, 5};

	cout << "\nInitial Vector: ";
	for(const int& i : num){
		cout << i << " ";
	}


	cout << "\n\nUpdate vector: ";
	for(int& i : num){
		i = 20;
		cout << i << " ";
	}

	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;

	cout << "\n\nUpdate vector: ";
	for(const int& i : num){
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main(){

	int x[3][4] = {
		// Cols1 - Cols2 - Cols3 - Cols4
	/*Raws 1*/ {1,      2,      3,      4},
	/*Raws 2*/ {5,      6,      7,      8},
	/*Raws 3*/ {9,     10,     11,     12}


	};


	for(int i = 0; i < 3; ++i){

		for(int j = 0; j < 4; ++j){
			cout << x[i][j] << " ";
		}

 	cout << endl;

	}


	return 0;
}


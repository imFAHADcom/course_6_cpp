/*

Write a program to store the multiplication table results 10x10 and print them on the screen.

*/

#include <iostream>
#include <cstdio>

using namespace std;




int main(){
	int x[10][10];

	for(int i = 0; i < 10; ++i){
		for(int j = 0; j < 10; ++j){
			x[i][j] = (i + 1) * (j + 1);

		}
	}


	for(int k = 0; k < 10; ++k){
		for(int l = 0; l < 10; ++l){
			printf("%0*d ", 2, x[k][l]);
		}
		cout << endl;
	}

	return 0;
}

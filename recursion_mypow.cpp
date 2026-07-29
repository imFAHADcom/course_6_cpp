#include <iostream>

using namespace std;


long long myPow(int base, int exponent){

	if(exponent == 0){
		return 1;
	}
	else{
		return base * myPow(base, exponent -1);
	}

// You can use Ternary Operator: Short Hand IF
//	return (exponent == 0)? 1 : (base * myPow(base, exponent -1));


}


int main(){

	cout << myPow(2, 4) << endl;

	return 0;
}

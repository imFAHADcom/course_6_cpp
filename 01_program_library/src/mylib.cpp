#include "mylib/mylib.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

namespace mylib{
	int readPositiveNumber(const std::string& message, int from, int to){
		int number = 0;

		do{
			std::cout << message;
			std::cin >> number;

		} while(number < from || number > to);
		
		return number;
}



// random numbers 
	void initializeRandom(){
		srand((unsigned)time(NULL));
	}

	int randomNumber(int from, int to){
		int randNum = rand() % (to - from + 1) + from;

		return randNum;

	}

}

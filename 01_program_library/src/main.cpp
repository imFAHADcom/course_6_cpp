#include <iostream>
#include "mylib/mylib.h"


int main(){
// Initialize the random number generator once at the start of the program
	mylib::initializeRandom();

	std::cout << mylib::readPositiveNumber("Enter number 1 to 100 , Please? ", 1, 100) << "\n";

	std::cout << "Random Number 1: " << mylib::randomNumber(20, 40) << std::endl;
	std::cout << "Random Number 2: " << mylib::randomNumber(20, 40) << std::endl;
	std::cout << "Random Number 3: " << mylib::randomNumber(20, 40) << std::endl;

    return 0;
}

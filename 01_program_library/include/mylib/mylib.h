#pragma once

#include <string>


namespace mylib{

	int readPositiveNumber(const std::string& message, int from, int to);


// random numbers 
	void initializeRandom();

	int randomNumber(int from, int to);

}


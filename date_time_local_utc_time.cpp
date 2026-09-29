#include <iostream>
#include <ctime>

using namespace std;

int main(){
	time_t currentTime = time(0);

	char* localDateTime = ctime(&currentTime); 
	cout << "Local time and date is: " << localDateTime << "\n";

	tm* utcTimeInfo = gmtime(&currentTime);

	char* utcDateTime = asctime(utcTimeInfo);

	cout << "UTC time and date is: " << utcDateTime;

	return 0;
}

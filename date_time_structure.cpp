/*
int tm_sec; // seconds of minutes from 0 to 61
int tm_min; // minutes of hour from 0 to 59
int tm_hour; // hours of day from 0 to 24
int tm_mday; // day of month from 1 to 31
int tm_mon; // month of year from 0 to 11
int tm_year; // year since 1900
int tm_wday; // days since sunday
int tm_yday; // days since January 1st
int tm_isdst; // hours of daylight savings time
*/

#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>

using namespace std;

int main(){
	string weekDays[7] = {
        	"Sunday",
	        "Monday",
	        "Tuesday",
	        "Wednesday",
	        "Thursday",
	        "Friday",
        	"Saturday"
	    };

	time_t currentTime = time(0);

	tm* localTimeInfo = localtime(&currentTime);

	cout << "\nYear: " << localTimeInfo->tm_year + 1900 << "\n";
	cout << "Month: " << localTimeInfo->tm_mon + 1 << "\n";
	cout << "Day: " << localTimeInfo->tm_mday << "\n";
	cout << "Hour: " << localTimeInfo->tm_hour << "\n";
	cout << "Min: " << localTimeInfo->tm_min << "\n";
	cout << "Second: " << localTimeInfo->tm_sec << "\n";
	cout << "Week Day (Days sice sunday): " << localTimeInfo->tm_wday << " " << weekDays[localTimeInfo->tm_wday] << "\n";
	cout << "Year Day (Days sice Jan 1st): " << localTimeInfo->tm_yday + 1<< "\n";
	cout << "Daylight Saving Time: " << localTimeInfo->tm_isdst << "\n";

	return 0;
}

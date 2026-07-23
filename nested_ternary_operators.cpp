#include <iostream>
#include <string>

using namespace std;

int main() {
	int grade = 0;
	string result = "";

	cout << "Enter a grade, Please? ";
	cin >> grade;

	result = (grade < 1 || grade > 100) ? "Enter error try again! " : grade < 50 ? "Poor" : grade < 61 ? "Fair" : grade < 76 ? "Good" : grade < 90 ? "Very good" : "Excellent";

	cout << result << "\n";

    return 0;
}

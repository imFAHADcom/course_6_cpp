#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1 = "My name is Fahad, I love programming.";

	// Print the length of string.
	cout << s1.length() << "\n";

	// Returns the letter at position 3
	cout << s1.at(3) << "\n";

	// Adds @ProgrammingAdvices to the end of string
	s1.append(" @ProgrammingAdvices");
	cout << s1 << "\n";

	// inserts Ali at position 7
	s1.insert(7, " Ali");
	cout << s1 << "\n";
	
	// prints all the next 8 letters from position 16.
	cout << s1.substr(15, 5) << "\n";
	
	// Add one character to the end of the string 
	s1.push_back('X');
	cout << s1 << "\n";

	// Removes one character from the end of the string
	s1.pop_back();
	cout << s1 << "\n";

	// Finds Ali in the string
	cout << s1.find("Ali") << "\n";
	// Finds alin in the string
	cout << s1.find("ali") << "\n";

	if(s1.find("ali") == s1.npos){
		cout << "ali is not found\n";

	}

	// Clears all string letters.
	s1.clear();
	cout << s1 << endl;

	return 0;
}

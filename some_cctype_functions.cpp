#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	char x;
	char w;

	// Convert letter lower to upper
	x = toupper('a');

	// Convert letter upper to lower
	w = tolower('A');

	cout << "Convert a to A: " << x << "\n";
	cout << "Convert A to a: " << w << "\n";


	// Digits (A to Z)
	// returns zero if not, and non zero of yes
	cout << "isupper('A'): " << isupper('A') << "\n"; // isupper('A'): 256

	// lower case (a to z)
	// returns zero if not, and non zero of yes
	cout << "islower('A'): " << islower('A') << "\n"; // islower('A'): 0

	// Digits (0 to 9)
	// returns zero if not, and non zero of yes
	cout << "isdigit('A'): " << isdigit('A') << "\n"; // isdigit('A'): 0

	// punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
	// returns zero if not, and non zero of yes
	cout << "ispunct('A'): " << ispunct('A') << endl; // ispunct('A'): 0

	return 0;
}

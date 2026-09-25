#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void printFileContent(string fileName){
	fstream myFile;

	myFile.open(fileName, ios::in); // Read mode

	if(myFile.is_open()){
		string line;

		while(getline(myFile, line)){
			cout << "\n" << line;
		}

		myFile.close();

		cout << endl;
	}
}

int main(){
	printFileContent("MyFile.txt");

	return 0;
}

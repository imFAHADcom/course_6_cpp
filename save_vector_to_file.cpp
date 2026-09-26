#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void saveVectorToFile(string fileName, vector <string> vFileContent){
	fstream myFile;

	myFile.open(fileName, ios::out); // Write mode

	if(myFile.is_open()){

		for(string& line : vFileContent){
			if(line != ""){
				myFile << line << "\n";
			}
		}
	}
	myFile.close();

}


int main(){
	vector <string> vFileContent{"Salem", "Ahmed", "Jasem", "Manar", "Sara"};

	saveVectorToFile("myFile2.txt", vFileContent);

	return 0;
}

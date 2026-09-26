#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void loadDataFromFileToVector(string fileName, vector <string>& vFileContent){
	fstream myFile;

	myFile.open(fileName, ios::in); // Read mode

	if(myFile.is_open()){
		string line;

		while(getline(myFile, line)){
			vFileContent.push_back(line);
		}
		myFile.close();
	}

}

int main(){
	vector <string> vFileContent;

	loadDataFromFileToVector("MyFile.txt", vFileContent);

	for(string& line : vFileContent){

		cout << line << "\n";
	}
	cout << endl;

	return 0;
}

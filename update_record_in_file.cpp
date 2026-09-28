#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void loadDataFromFileToVector(const string& fileName, vector <string>& vFileContent){
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

void saveVectorToFile(const string& fileName, const vector <string>& vFileContent){
	fstream myFile;

	myFile.open(fileName, ios::out); // write mode

	if(myFile.is_open()){
		for(const string& line : vFileContent){
			myFile << line << "\n";
		}
		myFile.close();
	}
}

void updateRecordInFile(const string& fileName, const string& record, const string& updateTo){
	vector <string> vFileContent;
	loadDataFromFileToVector(fileName, vFileContent);

	for(string& line : vFileContent){
		if(line == record){
			line = updateTo;
		}
	}

	saveVectorToFile(fileName, vFileContent);
}


void printFileContent(const string& fileName){
	fstream myFile;

	myFile.open(fileName, ios::in); // Read mode

	if(myFile.is_open()){
		string line;
		while(getline(myFile, line)){
			cout << line << "\n";
		}
		myFile.close();
	}

}


int main(){
	cout << "Print file content before update:\n";
	printFileContent("myFile2.txt");

	updateRecordInFile("myFile2.txt", "Salem", "Bssam");

	cout << "\nPrint file content after update:\n";
	printFileContent("myFile2.txt");

	return 0;
}

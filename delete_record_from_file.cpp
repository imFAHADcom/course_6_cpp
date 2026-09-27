#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void loadDataFromFileToVector(const string& fileName, vector <string>& vFileContent){
	fstream myFile;

	myFile.open(fileName, ios::in); // Read Mode

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

	myFile.open(fileName, ios::out); // Write mode

	if(myFile.is_open()){

		for(const string& line : vFileContent){
			if(line != ""){

				myFile << line << "\n";
			}

		}

		myFile.close();
	}
}


void deleteRecordFromFile(const string& fileName, const string& record){
	vector <string> vFileContent;

	loadDataFromFileToVector(fileName, vFileContent);

	for(string& element : vFileContent){
		if(element == record){
			element = "";
		}
	}

	saveVectorToFile(fileName, vFileContent);
}

void printFileContent(string fileName){
	fstream myFile;
	
	myFile.open(fileName, ios::in); // Read mode

	if(myFile.is_open()){
		string line;

		while(getline(myFile, line)){
			cout << line << "\n";
		}

		myFile.close();
		cout << endl;
	}
}


int main(){
	cout << "file content before delete record:\n";
	printFileContent("myFile2.txt");	

	deleteRecordFromFile("myFile2.txt", "Salem");


	cout << "\nFile content after delete record:\n";
	printFileContent("myFile2.txt");	

	return 0;
}


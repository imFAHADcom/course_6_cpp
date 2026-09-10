#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector <int> v_Numbers;


	// Adding elements to a vector 
	v_Numbers.push_back(10);
	v_Numbers.push_back(20);
	v_Numbers.push_back(30);
	v_Numbers.push_back(40);
	v_Numbers.push_back(50);

	cout << "\nStack size before pop = " << v_Numbers.size() << endl; 

	// Removing elements from a vector
	v_Numbers.pop_back();
	v_Numbers.pop_back();
	v_Numbers.pop_back();
	v_Numbers.pop_back();
	v_Numbers.pop_back();


/*
	// Removing elements from a vector use method v_Numbers.empty() 
	while(!v_Numbers.empty()){
		v_Numbers.pop_back();
	}


	// Removing elements from a vector use method v_Numbers.size() 
	while(v_Numbers.size() > 0){
		v_Numbers.pop_back();
	}


	// Removing elements from a vector use method v_Numbers.clear() 
	v_Numbers.clear();


*/



	cout << "\nStack size after pop = " << v_Numbers.size() << endl; 

	cout << "\nNumbers vector: \n";
	// Ranged loop
	for(int& numbers : v_Numbers){
		cout << numbers << "\n";
	}

	cout << endl;


	return 0;
}

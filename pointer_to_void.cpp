#include <iostream>

using namespace std;

int main(){
	float num = 2.3;
	void* ptr = &num;

	cout << ptr << endl; // 0x7ffd55b8db3c
	cout << *(static_cast<float*>(ptr)) << endl; // 2.3

	int x = 50;
	ptr = &x;


	cout << "\n" << ptr << endl; // 0x7ffd3cb31d4c
	cout << *(static_cast<int*>(ptr)) << endl; // 50

	return 0;
}

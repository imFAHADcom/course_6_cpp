#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int& x = a;

    cout << "a value = " << a << "\n";
    cout << "a address = " << &a << "\n";

    cout << "\nx value (reference to a) = " << x << "\n";
    cout << "x address = " << &x << "\n";


    int* p = &a;

    cout << "\np value (address of a) = " << p << "\n";
    cout << "*p value = " << *p << "\n";


    int b = 20;

    p = &b;

    cout << "\nAfter p = &b:\n";
    cout << "p value (address of b) = " << p << "\n";
    cout << "*p value = " << *p << "\n";

    return 0;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char name[] = {"Fahad"};
	char company[] = {"Sunday"};

	printf("Dear %s, How are you?\n", name);
	printf("Welcome to %s company\n", company);

	char c = 'S';

	printf("Setting width of c :%*c \n", 1, c);
	printf("Setting width of c :%*c \n", 2, c);
	printf("Setting width of c :%*c \n", 3, c);
	printf("Setting width of c :%*c \n", 4, c);


	return 0;
}

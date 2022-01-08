#include <iostream>
#include <conio.h>

using namespace std;

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	nullptr_t np1, np2;

	// <= and >= comparison always return true
	if (np1 >= np2) {
		cout << "can compare" << endl;
	} else {
		cout << "can not compare" << endl;
	}
		
	// Initialize a pointer with value equal to np1
	char* x = np1; // same as x = nullptr (or x = NULL
					// will also work)
	if (x == nullptr) {
		cout << "x is null" << endl;
	} else {
		cout << "x is not null" << endl;
	}
		
	_getch();
	return 0;
}

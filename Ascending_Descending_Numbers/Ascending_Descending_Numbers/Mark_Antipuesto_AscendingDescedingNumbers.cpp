/*
Mark Antipuesto, JT Schuebel, Nick Azar - Period 4
Three Digit Ascend Descend Selection 
Display three digits descening, ascending, or neither.
*/

// Libraries
#include <iostream>
#include <conio.h>
// Namespaces
using namespace std;
//Functions()
void pause() {
	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}
//Main
void main() {
	int x;
	cout << "Type in a 3 digit number" << endl;
	cin >> x;
	int A = x / 100;
	int B = (x / 10) - ((x / 100) * 10);
	int C = x % 10;
	
	if (A > B && B > C) {
		cout << "Descending" << endl;
	}
	else if (A < B && B < C) {
		cout << "Ascending" << endl;
	}
	else {
		cout << "Neither" << endl;
	}
	pause();
}
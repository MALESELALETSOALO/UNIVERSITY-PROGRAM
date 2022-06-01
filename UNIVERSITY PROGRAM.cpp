// UNIVERSITY PROGRAM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>

int main() {

	int Marks, Salary;
	char Grade;

	cout << " percentage you obtained " << endl;
	cin >> Marks;

	if (Marks >= 90) {
		Grade = 'A';
	}
	else if ( Marks >= 75 && Marks < 89 ) {
		Grade = 'B';

	}
	else if ( Marks >= 60 && Marks < 75 ) {
		Grade = 'C';

	}
	else if (Marks < 60) {
		Grade = 'D';
	}

	switch ( Grade ) {
		case 'A':
			cout << " You get a car and you can go to university of your choice";
			break;

			if (Salary > 5000) {
		case 'B':
			cout << " she earns more than R5000 during the December holidays, she can also go to a university of her choice and you will give her a car.";
			}	
			else {
				cout << " she can study at a university of her choice but you will not give her a car. ";
			}
			break;

		case 'C':
			cout << " she must study at the nearest university.";
			break;

		case 'D':
			cout << " she cannot go to university and will have to consider other alternatives.";
			break;

		default:
			cout << " Invalid entered number ";
	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

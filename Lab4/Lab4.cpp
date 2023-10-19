// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int num, factorial = 1;

	cout << "Factorial: " << endl;
	cout << "Enter a number: ";
	cin >> num;
	while (num < 0)
	{
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> num;
	}
	if (num >= 0)
	{
		cout << num << "! = ";

		for (int i = 1; i <= num; i++)
		{
			if (i != num)

			{
				cout << i << " * ";
			}
			else

			{
				cout << num << " = ";
			}

			factorial = factorial * i;

		}
		cout << factorial << endl;
	}
}
// Factorial code done!

void arithmetic() {

	int S;
	int D;
	int E;
	int a = 0, b = 0;
	int Sum = 1;

	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> S;

	cout << "Enter a number to add each time: ";
	cin >> D;

	cout << "Enter the number of elements in the series: ";
	cin >> E;

	while (E < 0)
	{
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> E;


	}

	b = E;
	b -= 1;
	cout << S; // outputs the first number

	while (b > 0)// takes that new value and we decrement it till it hits zero 
	{
		cout << " + ";
		a += S; // adds the total up for the final part 
		S += D;// adds the increment to the initial value 
		cout << S;
		b--;
	}
	if (b == 0)
	{
		a += S;
		cout << " = " << a << endl;
	}


}

// Arithmetic Series Done!
void geometric() {

	int h, i, j, k = 0, l = 0;
	cout << "Geometric Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> h;

	cout << "Enter a number to multiply by each time: ";
	cin >> i;

	cout << "Enter the number of elements in the series: ";
	cin >> j;

	while (j < 0)
	{
		cout << "Nice try, please enter a POSITIVE number...:";
		cin >> j;


	}

	k = j;
	k -= 1;
	cout << h;
	while (k > 0)
	{
		cout << " + ";
		l += h;
		h *= i;
		cout << h; // outputs the current value after adding the difference value
		k--; // decrements the # of Elements
	}
	if (k == 0)
	{
		l += h;//adds the final value to a
		cout << " = " << l << endl;
	}

}

// Geo done :)!

int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
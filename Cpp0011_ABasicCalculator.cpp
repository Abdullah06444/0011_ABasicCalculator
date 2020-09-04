#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	bool turnOnOff = true;
	do
	{

		double number1, number2;
		cout << "Enter any number :";
		cin >> number1;

		cout << "1) Addition Operation" << endl
			<< "2) Subtraction Operation" << endl
			<< "3) Multiplication Operation" << endl
			<< "4) Division Operation" << endl
			<< "5) Remainder Calculate Operation" << endl
			<< "6) Square-root Calculate Operation" << endl
			<< "7) Radian Calculate Operation" << endl
			<< "8) Terminate Program" << endl << endl << endl;

		cout << "Select your operation :";

		int choice;
		cin >> choice;

		switch (choice)
		{

		case 1:
			cout << "Enter any number :";
			cin >> number2;
			cout << "Result :" << number1+number2 << endl << endl << endl;
			break;
		case 2:
			cout << "Enter any number :";
			cin >> number2;
			cout << "Result :" << number1 - number2 << endl << endl << endl;
			break;
		case 3:
			cout << "Enter any number :";
			cin >> number2;
			cout << "Result :" << number1 * number2 << endl << endl << endl;
			break;
		case 4:
			cout << "Enter any number :";
			cin >> number2;
			if(number2 != 0)
				cout << "Result :" << number1 / number2 << endl << endl << endl;
			else
				cout << "Result : cannot divided by zero" << endl << endl << endl;
			break;
		case 5:
			cout << "Enter any number :";
			cin >> number2;
			if (number2 != 0)
				cout << "Result : the remainder/mod is " << fmod(number1,number2) << endl << endl << endl;
			else
				cout << "Result : cannot divided by zero" << endl << endl << endl;
			break;
		case 6:
			cout << "Result :" << sqrt(number1) << endl;
			break;
		case 7:
			cout << number1 << " degree is " << number1/180 << " pi radian" << endl << endl << endl;
			break;
		case 8:
			turnOnOff = false;
			break;
		default:
			cout << "Invalid operation" << endl << endl << endl;
			break;
		}

	} while (turnOnOff);
}
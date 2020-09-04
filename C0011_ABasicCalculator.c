#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{

	bool turnOnOff = true;
	do
	{

		double number1, number2;
		printf("Enter any number :");
		scanf("%lf", &number1);

		printf("1) Addition Operation\n"
			   "2) Subtraction Operation\n"
			   "3) Multiplication Operation\n"
			   "4) Division Operation\n"
			   "5) Remainder Calculate Operation\n"
			   "6) Square-root Calculate Operation\n"
			   "7) Radian Calculate Operation\n"
			   "8) Terminate Program\n\n\n");

		printf("Select your operation :");

		int choice;
		scanf("%d", &choice);

		switch (choice)
		{

		case 1:
			printf("Enter any number :");
			scanf("%lf", &number2);
			printf("Result :%lf\n\n\n", number1 + number2);
			break;
		case 2:
			printf("Enter any number :");
			scanf("%lf", &number2);
			printf("Result :%lf\n\n\n", number1 - number2);
			break;
		case 3:
			printf("Enter any number :");
			scanf("%lf", &number2);
			printf("Result :%lf\n\n\n", number1 * number2);
			break;
		case 4:
			printf("Enter any number :");
			scanf("%lf", &number2);
			if (number2 != 0)
				printf("Result :%lf\n\n\n", number1 / number2);
			else
				printf("Result : cannot divided by zero\n\n\n");
			break;
		case 5:
			printf("Enter any number :");
			scanf("%lf", &number2);
			if (number2 != 0)
				printf("Result : the remainder/mod is %lf\n\n\n", fmod(number1, number2));
			else
				printf("Result : cannot divided by zero\n\n\n");
			break;
		case 6:
			printf("Result : %lf\n", sqrt(number1));
			break;
		case 7:
			printf("%lf degree is %lf pi radian\n\n\n", number1, number1 / 180);
			break;
		case 8:
			turnOnOff = false;
			break;
		default:
			printf("Invalid operation\n\n\n");
			break;
		}

	} while (turnOnOff);
}
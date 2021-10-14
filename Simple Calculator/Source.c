#include <stdio.h>

//Main
void main()
{
	// Declare variables
	float num1, num2, sum, minus, mult, divide;
	float amountCal = 0;
	char oper;

	//Decide which calculation to do
	printf("a-Addition\ts-Subtraction\tm-Multiplication\td-Division\nEnter which operator you wish to use:\t");
	scanf("%c", &oper);
	
	//Prompt and input values
	printf("Please enter number 1\t");
	scanf("%f", &num1);

	printf("Please enter number 2\t");
	scanf("%f", &num2);

	//Switch Statement for operator chosen
	switch (oper)
	{
		//Addition
		case 'a':
		case 'A':
			sum = (num1 + num2);
			printf("\n\t%.2f plus %.2f is : %.2f\n", num1,num2,sum);
		break;

		//Subtraction
		case 's':
		case 'S':
			minus = (num1 - num2);
			printf("\n\t%.2f minus %.2f is : %.2f\n", num1, num2, minus);
			break;

		//Multiplication
		case 'm':
		case 'M':
			mult = (num1 * num2);
			printf("\n\t%.2f multiplied by %.2f is : %.2f\n", num1, num2, mult);
			break;

		//Division
		case 'd':
		case 'D':
			divide = (num1 / num2);
			printf("\n\t%.2f divided by %.2f is : %.2f\n", num1, num2, divide);
			break;

		//If none above clicked
		default:
			printf("\nIncorrect Character Entered!\n");
			break;
	}
}
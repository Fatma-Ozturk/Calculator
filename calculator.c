#include <stdio.h>

int addTwoNumbers()
{
	/*variable declaration and initialization*/
	float number1, number2, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter two numbers for addition:");
	scanf("%f %f", &number1, &number2);

	/*operation part*/
	result = number1 + number2;
	printf("Result: %f\n", result);

	/*cleaning part of the function*/
	result = 0;
	number1 = 0;
	number2 = 0;
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int subtractTwoNumbers()
{
	/*variable declaration and initialization*/
	float number1, number2, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter two numbers for subtraction:");
	scanf("%f %f", &number1, &number2);

	/*operation part*/
	result = number1 - number2;
	printf("Result: %f\n", result);

	/*cleaning part of the function*/
	result = 0;
	number1 = 0;
	number2 = 0;
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int multiplyTwoNumbers()
{
	/*variable declaration and initialization*/
	float number1, number2, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter two numbers for multiplication:");
	scanf("%f %f", &number1, &number2);

	/*operation part*/
	result = number1 * number2;
	printf("Result: %f\n", result);

	/*cleaning part of the function*/
	result = 0;
	number1 = 0;
	number2 = 0;
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int divideTwoNumbers()
{
	/*variable declaration and initialization*/
	float number1, number2, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter two numbers for division:");
	scanf("%f %f", &number1, &number2);

	/*operation part*/
	if (number2 == 0)
	{
		// if denominator is 0
		printf("*** %s ***\n", "Can not divide by zero");
	}
	else
	{
		result = number1 / number2;
		printf("Result: %f\n", result);
	}

	/*cleaning part of the function*/
	result = 0;
	number1 = 0;
	number2 = 0;
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int powerOfNumber()
{
	/*variable declaration and initialization*/
	float number1, result = 0;
	int number2 = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter two numbers for exponentiation:");
	scanf("%f %d", &number1, &number2);

	/*operation part*/
	if (number2 == 0)
	{
		if (number1 == 0)
		{
			// 0 to the power of 0
			printf("Result: %s\n", "undefined");
		}
		else
		{
			// if only exponent is 0
			result = 1;
			printf("Result: %f\n", result);
		}
	}
	else if (number2 < 0)
	{
		// if exponent is negative
		number2 *= -1;
		result = number1;
		while (--number2 > 0)
		{
			result *= number1;
		}
		result = 1 / result;
		printf("Result: %f\n", result);
	}
	else
	{
		result = number1;
		while (--number2 > 0)
		{
			result *= number1;
		}
		printf("Result: %f\n", result);
	}

	/*cleaning part of the function*/
	result = 0;
	number1 = 0;
	number2 = 0;
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int findAvarageNumber()
{
	/*variable declaration and initialization*/
	float array[1000] = {0};
	int index_temp  = 0;
	int index = 0;
	float number, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter numbers to find average number:");
	printf("*** %s ***\n", "When you are finished entering numbers, press 'e'");
	scanf("%f", &array[index]);
	index++;
	while (scanf("%f", &number) == 1)
	{
		array[index] = number;
		index++;
	}

	/*operation part*/
	while (index_temp <= index)
	{
		result += array[index_temp];
		index_temp++;
	}
	result = result / index;
	printf("Result: %f\n", result);

	/*cleaning part of the function*/
	index = 0;
	result = 0;
	index_temp = 0;
	number = 0;
	for (int i = 0; i < 1000; ++i)
	{
		array[i] = 0;
	}
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

int findMaximumNumber()
{
	/*variable declaration and initialization*/
	float array[1000] = {0};
	int index = 0;
	int index_temp = 1;
	float number, result = 0;

	/*get input from the user*/
	printf("\n*** %s ***\n", "Please, enter numbers to find maximum number:");
	printf("*** %s ***\n", "When you are finished entering numbers, press 'e'");
	while (scanf("%f", &number) == 1)
	{
		array[index] = number;
		index++;
	}

	/*operation part*/
	result = array[0];
	while (index_temp < index)
	{
		if (result < array[index_temp])
		{
			result = array[index_temp];
		}
		index_temp++;
	}
	printf("Result: %f\n", result);

	/*cleaning part of the function*/
	result = 0;
	number = 0;
	index = 0;
	index_temp = 1;
	for (int i = 0; i < 1000; ++i)
	{
		array[i] = 0;
	}
	// clear buffer of scanf() before next input
	while (getchar() != '\n')
		;
	return (0);
};

void menu()
{
	// function of display menu on screen
	char str[13][50] =
		{"%% WELCOME TO GTU CALCULATOR MACHINE %%\n",
		 "%% STUDENT NAME: FATMA ÖZTÜRK        %%\n",
		 "%% PLEASE SELECT FROM THE FOLLOWING  %%\n",
		 "%% MENU :                            %%\n",
		 "(1) ADD TWO NUMBERS\n",
		 "(2) SUBTRACT TWO NUMBERS\n",
		 "(3) MULTIPLY TWO NUMBERS\n",
		 "(4) DIVIDE TWO NUMBERS\n",
		 "(5) TAKE THE NTH POWER OF A NUMBER\n",
		 "(6) FIND AVERAGE OF NUMBERS INPUTTED\n",
		 "(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n",
		 "(0) EXIT\n",
		 "PLEASE SELECT: "};

	for (int i = 0; i < 13; ++i)
	{
		printf("%s", str[i]);
	}
}

void select_number()
{
	/*variable declaration for input*/
	char selected_number;

	// infinite loop as long as the user provides input
	while (scanf("%c", &selected_number) == 1)
	{
		/*processing*/
		if (selected_number == '1')
			addTwoNumbers();
		else if (selected_number == '2')
			subtractTwoNumbers();
		else if (selected_number == '3')
			multiplyTwoNumbers();
		else if (selected_number == '4')
			divideTwoNumbers();
		else if (selected_number == '5')
			powerOfNumber();
		else if (selected_number == '6')
			findAvarageNumber();
		else if (selected_number == '7')
			findMaximumNumber();
		else if (selected_number == '0')
		{
			printf("*** %s ***\n", "You're leaving the program.");
			break;
		}
		else if (selected_number == 'M')
		{
			// if the user will see the menu when type 'M'
			menu();

			// clear buffer of scanf() before next input
			while (getchar() != '\n')
				;
		}
		else
		{
			// if an input that is not in the menu is entered
			printf("*** %s ***\n", "Invalid input, please enter a valid number.");

			// clear buffer of scanf() before next input
			while (getchar() != '\n')
				;
		}
		// guidance the user
		printf("\n*** %s ***\n", "Please, select type a number from the menu or type M to see the menu");
	}
}

int main()
{
	/*main function*/
	menu();			 // displays the menu
	select_number(); // processing the number
	return (0);
}
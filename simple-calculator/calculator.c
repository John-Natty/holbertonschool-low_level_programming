#include <stdio.h>
/**
 * main - calculator
 * void readInput(int *A, int *B) - reads the input values for A and B.
 * int add(int A, int B) - performs addition of A and B.
 * int subtract(int A, int B) - performs subtraction of A and B.
 * int multiply(int A, int B) - performs multiplication of A and B.
 * int divide(int A, int B) - performs division of A and B.
 * readInput - Reads two integer operands from the user.
 * @A: pointer to the first operand (updated by the function)
 * @B: pointer to the second operand (updated by the function)
 * Return: Always 0.
 */
void readInput(int *A, int *B);
int add(int A, int B);
int subtract(int A, int B);
int multiply(int A, int B);
int divide(int A, int B);

int main(void)
{	int choiceMenu, A, B, Result;

	printf("Simple Calculator\n");
	while (1)
	{
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice: ");
		scanf("%d", &choiceMenu);
		if (choiceMenu == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choiceMenu < 0 || choiceMenu > 4)
		{
			printf("Invalid choice\n");
		}
		else if (choiceMenu >= 1 && choiceMenu <= 4)
		{
			readInput(&A, &B);
			if (choiceMenu == 1)
			{
				Result = add(A, B);
			}
			else if (choiceMenu == 2)
			{
				Result = subtract(A, B);
			}
			else if (choiceMenu == 3)
			{
				Result = multiply(A, B);
			}
			else if (choiceMenu == 4)
			{
				Result = divide(A, B);
			}
			printf("Result: %d\n", Result);
		}
	}
	return (0);
}
/**
 * readInput - Reads two integer operands from the user.
 * @A: pointer to the first operand (updated by the function)
 * @B: pointer to the second operand (updated by the function)
 */
void readInput(int *A, int *B)
{
	printf("A: ");
	scanf("%d", A);
	printf("B: ");
	scanf("%d", B);
}
/**
 * add - performs addition of A and B.
 * @A: first operand
 * @B: second operand
 * Return: the sum of A and B
 */
int add(int A, int B)
{
	return (A + B);
}
/**
 * subtract - performs subtraction of A and B.
 * @A: first operand
 * @B: second operand
 * Return: the difference of A and B
 */
int subtract(int A, int B)
{
	return (A - B);
}
/**
 * multiply - performs multiplication of A and B.
 * @A: first operand
 * @B: second operand
 * Return: the product of A and B
 */
int multiply(int A, int B)
{
	return (A * B);
}
/**
 * divide - performs division of A and B.
 * @A: first operand
 * @B: second operand
 * Return: the quotient of A and B, or 0 if division by zero occurs
 */
int divide(int A, int B)
{
	if (B == 0)
	{
		printf("Error: division by zero\n");
		return (0);
	}
	return (A / B);
}

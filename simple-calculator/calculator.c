#include <stdio.h>
/**
 * main - calculator
 * Return: Always 0.
 */
int main(void)
{
	int choiceMenu, A, B, Result;

	printf("Simple Calculator\n");
	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice:");
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
		else if (choiceMenu == 1)
		{
			printf("A:");
			scanf("%d", &A);
			printf("B:");
			scanf("%d", &B);
			Result = A + B;
			printf("Result: %d\n", Result);
		}
	}
	return (0);
}

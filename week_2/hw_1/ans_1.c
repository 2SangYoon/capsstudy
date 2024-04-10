#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int sub(int a, int b);
double division(int a, int b);
int mul(int a, int b);
void oper(int a, int b, char c);
void menu(void);

int main(void)
{
	while (1)
	{
		menu();
	}

	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
double division(int a, int b)
{
	return (a * 1.0) / b;

}
int mul(int a, int b)
{
	return a * b;
}
void oper(int a, int b, char c)
{
	switch (c)
	{
	case'+':
	{
		printf("Result : %d\n", add(a, b));
		break;
	}
	case'-':
	{
		printf("Result : %d\n", sub(a, b));
		break;
	}
	case'*':
	{
		printf("Result : %d\n", mul(a, b));
		break;
	}
	case'/':
	{
		if (b == 0)
		{
			printf("Error !, Division by zero\n");
			return;
		}
		printf("Result : %.2lf\n", division(a, b));
		break;
	}
	case'!':
	{
		exit(1);
	}
	default:
	{
		printf("Wrong operation !\n");
	}

	}
}
void menu(void)
{
	int a, b;
	printf("Enter a number: ");
	scanf_s("%d %d", &a, &b);

	getchar();

	char op;
	printf("Enter a operation: ");
	scanf_s("%c", &op);

	oper(a, b, op);
}
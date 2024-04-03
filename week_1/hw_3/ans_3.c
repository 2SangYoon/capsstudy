#include <stdio.h>
int main(void)
{

	while (1)
	{
		int a, b;
		printf("Enter two number :");
		scanf_s("%d %d", &a, &b);

		char op;
		printf("Select operate(+, -, *, /) :");
		getchar();
		scanf_s("%c", &op);

		switch (op)
		{
		case'+':
		{
			printf("Result : %d\n", a + b);
			break;
		}
		case'-':
		{
			printf("Result : %d\n", a - b);
			break;
		}
		case'*':
		{
			printf("Result : %d\n", a * b);
			break;
		}
		case'/':
		{
			if (b == 0)
				printf("Error !, Division by zero");
			printf("Result : %.2lf\n", a * 1.0 / b);
			break;
		}
		case'!':
			return 0;
		default:
		{
			printf("Wrong operation !\n");
			continue;
		}

		}

	}

	return 0;


}
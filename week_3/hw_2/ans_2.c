#include <stdio.h>
int fib_seq(int a);
int main(void)
{
	int num;

	printf("Enter a number : ");
	while (1)
	{
		scanf_s("%d", &num);
		if (num <= 0)
		{
			printf("Error ! please enter positive number !");
		}
		else
			break;
	}
	printf("Nth number of Fibonachi sequence : %d", fib_seq(num));

	return 0;
}

int fib_seq(int a)
{
	if (a < 3)
	{
		return 1;
	}
	else
	{
		return (fib_seq(a - 2)) + (fib_seq(a - 1));
	}

}
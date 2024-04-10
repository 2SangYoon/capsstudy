#include <stdio.h>
long long factorial(int a);
int main(void)
{
	int n;
	while (1)
	{
		printf("Input : ");
		scanf_s("%d", &n);

		if (n >= 0)
		{
			break;
		}
		else
		{
			printf("Wrong number ! Please enter positive number ! \n");
			continue;
		}
	}

	printf("Output : %lld", factorial(n));

	return 0;
}
long long factorial(int a)
{
	if (a == 0)
		return 1;
	else
		return (long long)a * factorial(a - 1);
}
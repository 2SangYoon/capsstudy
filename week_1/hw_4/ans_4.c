#include <stdio.h>
int main(void)
{
	int N, dir;

	scanf_s("%d %d", &N, &dir);

	if (dir == 1)
	{
		for (int i = N; i > 0; i--)
		{
			for (int j = i - 1; j > 0; j--)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * (N - i) + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int k = 2 * (N - i) - 1; k > 0; k--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}
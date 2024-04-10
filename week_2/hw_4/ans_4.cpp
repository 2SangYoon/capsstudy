#include <stdio.h>
void grade_gen(int a, int b);
int main(void)
{
	int mid, final;

	printf("Enter a score : ");
	scanf_s("%d %d", &mid, &final);
	grade_gen(mid, final);

	return 0;
}
void grade_gen(int a, int b)
{
	double avg;
	avg = (a + b) / 2.0;

	if (avg >= 80)
	{
		printf("You`re grade is A\n");
	}
	else if (avg >= 50)
	{
		printf("You`re grade is B\n");
	}
	else
	{
		printf("You`re grade is F\n");
	}

	return;
}
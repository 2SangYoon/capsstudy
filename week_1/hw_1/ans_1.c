#include <stdio.h>
int main(void)
{
	int mid, final;

	scanf_s("%d", &mid);
	scanf_s("%d", &final);

	double avg = (mid + final) / 2.0;

	printf("%.1lf ", avg);

	if (avg >= 90)
		printf("A");
	else if (avg >= 80)
		printf("B");
	else if (avg >= 70)
		printf("C");
	else if (avg >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}
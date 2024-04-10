#include <stdio.h>
void alarm(int hour, int minit);
int main(void)
{
	int h, m;
	printf("Enter a time : ");
	scanf_s("%d %d", &h, &m);

	alarm(h, m);

	return 0;
}
void alarm(int hour, int minit)
{
	int h, m;


	h = hour;
	m = minit;

	if (minit - 45 < 0)
	{
		h = (h + 23) % 24;
		m += 15;
	}
	else
	{
		m -= 45;
	}

	printf("\n%d %d", h, m);

}
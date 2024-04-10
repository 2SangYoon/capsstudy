#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBERS 45

void lotto_num_maker(void);

int main(void)
{

	srand(time(NULL));

	for (int i = 0; i < 100; i++)
	{
		printf("set%d : ", i + 1);
		lotto_num_maker();
		printf("\n\n");
	}
	return 0;
}
void lotto_num_maker(void)
{
	for (int j = 0; j < 6; j++)
	{
		printf("%d  ", (rand() % 45 + 1));
	}
}
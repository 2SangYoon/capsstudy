#include <stdio.h>
int GCD(int a, int b);
int LCM(int a, int b);
int main(void)
{
	int n1, n2;
	printf("Enter two number : ");
	scanf_s("%d %d", &n1, &n2);
	printf("GCD : %d \nLCM : %d\n", GCD(n1, n2), LCM(n1, n2));

	return 0;
}
int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return GCD(b, a % b);
}
int LCM(int a, int b)
{
	return(a * b / GCD(a, b));
}
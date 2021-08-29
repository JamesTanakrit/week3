#include<stdio.h>
void x(int n) 
{
	if (n > 0)
	{
		printf("*");
		x(n - 1);
	}
}

int main()
{
	int n;
	scanf_s("%d", &n);
	x(n);
	return 0;
}
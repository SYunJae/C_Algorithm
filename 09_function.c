#include <stdio.h>

void func(int i, int j);

void main()
{
	int a = 3, b = 12;
	func(a, b);

	printf("a = %d, b = %d\n", a, b);
}

void func(i, j)
int i, j;
{
	i *= 3;
	j /= 3;
	printf("%d, %d\n", i, j);
}
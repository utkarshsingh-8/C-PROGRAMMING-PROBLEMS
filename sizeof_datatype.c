// Write a Program to Find Size of int, float, double and char in your computer

#include <stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char d;
	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(b));
	printf("%lu\n", sizeof(c));
	printf("%lu", sizeof(d));
	return 0;
}

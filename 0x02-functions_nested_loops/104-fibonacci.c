#include <stdio.h>
/**
 * main - fibonacci <3
 * Purpose - no hardcode
 * Return: Success 0
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b = 1;
	unsigned long int aq = 2;
	unsigned long int l = 1000000000;
	unsigned long int c;
	unsigned long int d;
	unsigned long int e;
	unsigned long int f;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", aq);
		aq += b;
		b = aq - b;
	}

	c = (b / l);
	d = (b % l);
	e = (aq / l);
	f = (aq % l);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", e + (f / l));
		printf("%lu", f % l);
		e = e + c;
		c = e - c;
		f = f + d;
		d = f - d;
	}
	printf("\n");
	return (0);
}

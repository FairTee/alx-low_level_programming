#include <stdio.h>
/**
 *main - The entry of our function
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("[Got]\n");
	printf("Size of char: %d byte(s)\n", (int)sizeof(char);
	printf("Size of int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of float: %d byte(s)\n", (int)sizeof(float));
	printf("\n[Expected]\n");
	printf("Size of a char: 1 byte(s)\n");
	printf("Size of an int: 4 byte(s)\n");
	printf("Size of a long int: 4 byte(s)\n");
	printf("Size of a long long int: 8 byte(s)\n");
	printf("Size of a float: 4 byte(s)\n");
	printf("\n[stderr]: [Anything]\n");
	return (0);
}

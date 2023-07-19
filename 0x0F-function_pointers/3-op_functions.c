#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns sum of two num
 * @a: first number
 * @b: second num
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two num
 * @a: first num
 * @b: second num
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two num
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns division of two num
 * @a: first num
 * @b: second num
 * Return: a and b after div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of div of two num
 * @a: first num
 * @b: second num
 * Return: remainder after division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of a and b
 * @a: the first number to be entered
 * @b: the second number to be entered
 * Return: the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: the first number to be entered
 * @b: the second number to be entered
 * Return: the difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: the first number to be entered
 * @b: the second number to be entered
 * Return: the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: the first number to be entered
 * @b: the second number to be entered
 * Return: the quotient of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the first number to be entered
 * @b: the second number to be entered
 * Return: the remainder of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}

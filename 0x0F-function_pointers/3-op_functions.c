#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns th esum of two numbers
 * @a; the forst number
 * @b: the second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Reurns the difference of two numbers.
 * @a: the forst number
 * @b: The second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * 	 * @a: The first number.
 * 	 	 * @b: The second number.
 * 	 	 	 *
 * 	 	 	 	 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op-mod - Returns the remainder of the division of two numbers
 * @a:the first number
 * @b: The second number
 *
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

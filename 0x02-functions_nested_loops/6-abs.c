#include "main.h"
/**
 * _abs - comutes the absolute value of ana integer
 * @a: number
 * Return: Returns the absolute value of the integer argument
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

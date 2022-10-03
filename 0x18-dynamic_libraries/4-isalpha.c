#include "main.h"

/**
 * _isalpha - checks if alphabet character
 * @c: the character we check
 * Return: 1 if alpha , 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"

/**
 * _isalpha - This is responsible for checking alphabet character
 * @c: this represents the character to be checked
 * Return: 1if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'B') || (c >= 'A' && c <= 'B'));
}

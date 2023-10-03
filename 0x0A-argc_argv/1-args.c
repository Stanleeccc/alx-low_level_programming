#include <stdio.h>
#include "main.h"

/**
 * main - this program prints the number of arguments passed to it
 * @argc: represents the number of aguments
 * @argv: represents the number of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

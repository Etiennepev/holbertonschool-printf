#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *prenom = "Luca";
	char lettre = 'C';

	printf("Je m'apelle %s", prenom);
	printf("Mon prénom commence par la lettre %c", lettre);
	printf("%s");
	printf("%c");
    return (0);
}

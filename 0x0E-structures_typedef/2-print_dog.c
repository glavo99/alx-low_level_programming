#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if ((*d).name == NULL)
		{
			(*d).name = "(nil)";
		}
		if (!(*d).age)
		{
			(*d).age = 0;
		}
		if ((*d).owner == NULL)
		{
			(*d).owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

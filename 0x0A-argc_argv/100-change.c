#include <stdio.h>
#include <stdlib.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
int cents, quarters, dimes, nickels, pennies, coins;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
	return (0);
}
quarters = calculate_quarters(cents);
cents = cents - quarters * 25;
dimes = calculate_dimes(cents);
cents = cents - dimes * 10;
nickels = calculate_nickels(cents);
cents = cents - nickels * 5;
pennies = calculate_pennies(cents);
cents = cents - pennies * 1;
coins = quarters + dimes + nickels + pennies;
printf("%i\n", coins);
return (0);
}

/**
 * calculate_quarters - claculate quarts
 * @cents: integer
 * Return: integer
 */

int calculate_quarters(int cents)
{
int i;

if (cents >= 25)
{
i = cents / 25;
return (i);
}
return (0);
}

/**
 * calculate_dimes - calculate_dimes
 * @cents: integer
 * Return: integer
 */

int calculate_dimes(int cents)
{
int i;

if (cents >= 10)
{
i = cents / 10;
return (i);
}
return (0);
}

/**
 * calculate_nickels - calculate_nickels
 * @cents: integer
 * Return: integer
 */

int calculate_nickels(int cents)
{
int i;

if (cents >= 5)
{
i = cents / 5;
return (i);
}
return (0);
}

/**
 * calculate_pennies - calculate pennines
 * @cents: integer
 * Return: integer
 */

int calculate_pennies(int cents)
{
int i;

if (cents >= 1)
{
i = cents / 1;
return (i);
}
return (0);
}


#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table is to be printed
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		/* Check if n is out of valid range (0 to 15) */
		return; /* Do nothing if n is invalid */
	}

	printf("Times Table for %d:\n", n);
	printf("-------------------\n");

	for (int i = 0; i <= 10; i++)
	{
		printf("%2d x %2d = %2d\n", i, n, i * n);
	}
}

int main()
{
	int n;

	printf("Enter a number (0 to 15): ");
	scanf("%d", &n);

	print_times_table(n);

	return 0;
}

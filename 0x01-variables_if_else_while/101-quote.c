#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Alwasys 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of are is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * by YOUSEF RAHIMI and Bereket Ayele
 *
 * Return: Always 0
 */
int main(void)
{
	int len_1;
	int len_2;
	unsigned int ui;
	void *addr;

	len_1 = _printf("printf a simple sentence.\n");
	len_2 = printf(" printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len_1, len_1);
	printf("Length:[%d, %i]\n", len_2, len_2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", " string !");
	printf("String:[%s]\n", "  string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len_1 = _printf("Percent:[%%]\n");
	len_2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len_1);
	printf("Len:[%d]\n", len_2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

extern int printf (const char *__restrict __format, ...)
{
	puts("9 8 10 24 75 - 9\n");
	puts("Congratulations, you win the Jackpot!\n");
	exit(0);
}

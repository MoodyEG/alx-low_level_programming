#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - keygen for crackme5
 * @argc: number of args
 * @argv: the args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *dic, key[6];
	int len, i, j;

	(void)argc;
	len = strlen(argv[1]);
	dic = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	key[0] = dic[((len ^ 0x3b) & 0x3f)];
	for (i = 0, j = 0; i < len; i++)
		j += argv[1][i];
	key[1] = dic[((j ^ 0x4f) & 0x3f)];
	for (i = 0, j = 1; i < len; i++)
		j *= argv[1][i];
	key[2] = dic[((j ^ 0x55) & 0x3f)];
	for (i = 0, j = argv[1][0]; i < len; i++)
	{
		if (argv[1][i] > j)
			j = argv[1][i];
	}
	srand((j ^ 0xe));
	key[3] = dic[(rand() & 0x3f)];
	for (i = 0, j = 0; i < len; i++)
		j += argv[1][i] * argv[1][i];
	key[4] = dic[((j ^ 0xef) & 0x3f)];
	for (i = 0, j = 0; i < argv[1][0]; i++)
		j = rand();
	key[5] = dic[((j ^ 0xe5) & 0x3f)];
	printf("%s", key);

	return (0);
}

#include <stdio.h>
/**
 * main- entry point
 * Return:0 on succcess
*/
int main(void)
{
	int i = 0;
	char j;

	while (i < 5)
	{
		printf("\n%d", i);
		for (j = 'a'; j < 'd'; j++)
		{
		printf("%c", j);
		}
		i++;
	}
	return (0);
}


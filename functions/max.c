#include <stdio.h>
/**
 *max-maximum value between two nums
 *@num1:-first no
 *@num2:-second no
 *Return:0 on success
 */
int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
	{
		result = num1;
	}
	else if (num2 > num1)
	{
		result = num2;
	}
	return (result);
}
/**
 *main-entry point
 *Return: 0 on success
 */
int main(void)
{
	int a, b;

	printf("Enter First no\n");
	scanf("%d", &a);
	printf("Enter second no\n");
	scanf("%d", &b);
	int maxno = max(a, b);

	printf("The Larger no is %d\n", maxno);
	return (0);
}

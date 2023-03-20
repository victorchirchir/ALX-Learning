#include <stdio.h>
/**
 * area-area of a rectangle
 * @l:-length
 * @w:-width
 * Return:0 on success
 */
int area(int l, int w)
{
	int area;

	area = l * w;
}
/**
 * main-entry point
 * Return: 0 on success
 */
int main(void)
{
	int result, a, b;

	printf("Enter Length\n");
	scanf("%d", &a);
	printf("Enter Width\n");
	scanf("%d", &b);
	result = area(a, b);
	printf("The Area is %d\n", result);
	return (0);
}

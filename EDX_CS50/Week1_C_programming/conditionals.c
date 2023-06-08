#include <stdio.h>

int main(void)
{
	int x, y;
	y = 40;

	printf("What is x? ");
	scanf("%d", &x);

	if (x < y)
	{
		printf("x is less than y.\n");
	}
	else if (x > y)
	{
		printf("x is more than y.\n");
	}
	else
	{
		printf("x is equal to y.\n");
	}

	return (0);
}

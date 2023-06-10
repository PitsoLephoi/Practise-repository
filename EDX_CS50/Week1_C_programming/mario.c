#include <stdio.h>

int main(void)
{
	const int n = 10;
	char c = 'P';

	for ( int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return (0);
}

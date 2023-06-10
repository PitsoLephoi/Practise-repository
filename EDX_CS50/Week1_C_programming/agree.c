#include <cs50.h>
#include <stdio.h>

int main(void)
{
	char c = get_char("do you Agree?[Y/N] " );

	if (c == 'y' || c == 'Y')
	{
		printf("Yes, I see that you agree\n");
	}
	else if (c == 'n' || c == 'N')
	{
		printf("Oh thats to bad then\n");
	}
	else
	{
		printf("You placed a character that is not applicable\n");
	
	}
	return (0);
}

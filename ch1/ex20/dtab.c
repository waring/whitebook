
#include <stdio.h>

main()
{
	int c;
	while ((c = getchar()) !='\n')
		if (c == '\t')
			printf("      ");
		else 
			putchar(c);
}
#include <stdio.h>

main()
{
    int c;

	while ((c == getchar()) !='\n'){
		if (c == '\t')
			printf ("\\t");
        if (c == '\b')
			printf ("\\b");
        if (c == '\\')
			printf ("\\\\");
		    
		else 
			putchar(c);
	}
}
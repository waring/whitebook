#include <stdio.h>


main()
{
	int c, n;
    n = 0;
	while ((c = getchar()) !='\n')

		if (c !=' '){
			n = 0;
	        putchar(c);
		}
		else
			if (n ==0){
			    putchar('\n');
	            n = 1;
			}
			else
				;
    printf("\n");
}
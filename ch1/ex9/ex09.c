#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, q;
	while ((c = getchar()) !=EOF){
		if (c == ' '){
			if (q == ON)
				;
			else {
				q = ON;
		        putchar(c);
			}
		}
		else {
			q = OFF;
		    putchar(c);
		}			
	}
}
#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, q;
    q =OFF;
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
/* cmd로 했는데 왜 한행씩만 입력받는걸까.. */
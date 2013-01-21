#include <stdio.h>
#define ON 1
#define OFF 0
main()
{
	int a, b;
    int c, x, y, q;
	x =OFF;
	y =OFF;
	q =OFF;
    a =b =0;


	while ((c = getchar()) !=EOF){
        if (c =='\'')
            ++a;
        if (c =='\"')
            ++b;
        if (a%2 ==0 && b%2 ==0){
		    if (c == '/')
			    x =ON;
		    else if (x ==ON && c == '*'){
			    x =OFF;
	            q =ON;
		    }
		    else
			    ;
		
		    if (c =='*')
		    	y =ON;
		    else if (y ==ON && c == '/'){
			    y =OFF;
		        q =OFF;
		    }
		    else if (q ==OFF && c !='/')
			    putchar(c);
		    else
			    ;
        }
        else
            putchar(c);
    }
	printf ("\n");
}		
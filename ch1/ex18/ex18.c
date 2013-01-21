#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
    int c, q, b_word;
    b_word =0;
    q =OFF;

    while ((c =getchar()) !=EOF){
        if (c =='\n' && (b_word =='\t' || b_word ==' ')){
            if (c == ' '){     
			    if (q ==ON)
				    ;
			    else {
				    q =ON;
		            putchar(c);
			    }
            }
		    else {
			    q = OFF;
		        putchar(c);
            }
        }
        else{
            putchar(b_word);
            b_word =c;
        }
    }
}
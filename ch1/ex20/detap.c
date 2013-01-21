#include <stdio.h>

main()
{
	int c, i, len, other;
    len =0;

    while ((c = getchar()) !=EOF){
        if (c == '\t'){
            if ((len%8) ==0)
                printf("        ");
            else{
                for (i =(len%8)-1; i <=8; ++i)
                    printf (" ");
                len =0;
            }
        }
        else{
            putchar(c);
            ++len;
        }
    }
}
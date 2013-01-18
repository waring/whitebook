#include <stdio.h>

main()
{
	int c, i, check;
    check =0;

    while ((c =getchar()) !=EOF){
        if (c !=' '){
            if (check >=2){
                for (i =check/8 +1; i >0; --i)
                    printf ("\t");
                check =0;
                putchar(c);
            }
            else if (check ==1){
                printf (" ");
                putchar(c);
                check =0;
            }
            else{
                putchar(c);
            }
        }
        else
            ++check;
    }
}
#include <stdio.h>
#define N 8
                                           */
main()
{
    int c, word;
    
    word =0;

    while ((c =getchar()) !=EOF){
        ++word;
        if (c =='\n')
            word =0;
        if (word ==N && c !=' '){
            printf("\n");
            putchar(c);
        }
        else
            putchar(c);
    }
}
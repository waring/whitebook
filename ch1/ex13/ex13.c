#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, i, a, nl, nw, word;
    int s[100];
    a = 0;
    word =ON;
    for (i =0; i <=99; ++i)
        s[i] =0;
    while ((c =getchar()) !=EOF){
        if (c>='0' && c<='~'){
            ++a;
            word =ON;
        }
        else if ((c =='\n' || c =='\t' || c ==' ') && word ==ON){
            ++s[a-1]; 
            a =0;
            word =OFF;
        }
        else
            ;
    }
        

    for (nl=0; nl <=99; ++nl){
        printf ("%d",nl+1);
        for (nw =1; nw <= s[nl]; ++nw)
            printf ("ㅁ");
        printf ("\n");
        }
    printf ("\n");
}
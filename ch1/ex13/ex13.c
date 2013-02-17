#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, i, a, nl, nw, word;
    int s[100];
    a = 0;
    word =OFF;
    for (i =0; i <=99; ++i)
        s[i] =0;
    while ((c =getchar()) !=EOF){
        if (c !='\n' && c !='\t' && c !=' '){
            ++a;
            word =ON;
        }
        else if (word ==ON){
            if (a < 100)
            ++s[a-1];
            else 
                ++s[99]; 
            a =0;
            word =OFF;
        }
    }
    if (a >= 100) {
        ++s[99];
    } else if (a > 0) {
        ++s[a-1];
    }

    for (nl=0; nl <=99; ++nl){
        printf ("%d",nl+1);
        for (nw =1; nw <= s[nl]; ++nw)
            printf ("ㅁ");
        printf ("\n");
        }
    printf ("\n");
}
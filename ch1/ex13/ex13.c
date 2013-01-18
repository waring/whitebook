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
            ++s[a-1]; /*문제의 근원지*/
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
/* 0값을 가지고 있는 ++s[a-1]를 ++s[a-1]; 하면 0 -> -858993460 이 되는 기괴한 일이 일어나는데 도통이유를 모르겠음 */
#include <stdio.h>

main()
{
    int c, i, n_word, nother, nl, nw;
    int word[79];
    n_word = nother = 0;
    for (i =0; i <10; ++i)
        word[i] =0;

    while ((c =getchar()) !=EOF){
        if (c >='0' && c <='~')
            ++word[c-'0'];
        else if (c ==' ' || c =='\t' || c =='\n')
            ++n_word;
        else
            ++nother;
    }
    for (nl=0; nl <=79; ++nl){
        printf ("\n%d ",nl+1);
        for (nw =1; nw <= word[nl]; ++nw){
            printf ("ㅁ");
        }
    }
    printf ("\n빈칸%d개 그외문자들 %d개\n",n_word,nother);
}
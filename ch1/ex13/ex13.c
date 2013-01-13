/* 동작은 되는데 동작후 런타임에러발생 ??? */


#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, i, space, h, g, n;
    int s[100];
	for (n =0 ; n <=100 ; ++n){
		s[n] = 0;
	}
	i =0;
	space = OFF;
	while ((c =getchar()) !='\n'){
		if (c !=' '){
			space =OFF;
			++s[i];
		}
		else if (space == OFF){
			space =ON;
			++i;
		}
		else
			;
	}
	for (h =0; h <=i; ++h){
		printf ("%d\t",h+1);
		for (g =1; g <=s[h]; ++g)
			printf ("ㅁ");
	    printf ("\n");
	}
}
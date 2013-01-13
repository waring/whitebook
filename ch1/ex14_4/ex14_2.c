#include <stdio.h>

main()
{
	int c, g, i, h;
	int s[25];
	for (i =0; i<=25; i++)
		s[i] =0;
	while ((c =getchar()) !='\n'){
		if (c>='a' && c<='z')
			++s[c-'a'];
		else
			;
	}
	printf ("a = 1, b = 2, c = 3...\n");
	for (h =0; h <=25; ++h){
		printf ("%d\t",h+1);
		for (g =1; g <=s[h]; ++g)
			printf ("¤±");
	    printf ("\n");
	}

}
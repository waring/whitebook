#include <stdio.h>

main()
{
	int c, g, i;
	int s[25];
	for (i =0; i<=25; i++)
		s[i] =0;

	while ((c =getchar()) !='\n'){
		if (c>='a' && c<='z')
			++s[c-'a'];
		else
			;
	}
	for (g =0; g <=25; ++g){
		printf ("%d ",s[g]);
	}
	printf("\n");
}
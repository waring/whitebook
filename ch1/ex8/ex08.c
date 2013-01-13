#include <stdio.h>

main()
{
	int c, nl, nw;

	nl = 0;
	nw = 0;
	while ((c = getchar()) !='\n')
		if (c =='\t')
			++nl;
		if (c == ' ')
			++nw;
		else
			;
	printf("빈칸의 계수는 %d개 텝의 계수는 %d개\n", nl, nw);
}
#include <stdio.h>

main()
{
	int c, nl, t, n;

	nl = 0;
	t = 0;
    n = 0;
	while ((c = getchar()) !=EOF)
        if (c == ' ')
			++nl;
        else if (c == '\t')
            ++t;
        else if (c == '\n')
            ++n;
        else
			;
	printf("빈칸의 계수는 %d개 탭의 계수는 %d개 행의 개수는 %d개\n", nl, t, n);
}
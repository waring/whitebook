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
	printf("��ĭ�� ����� %d�� ���� ����� %d��\n", nl, nw);
}
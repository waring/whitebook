#include <stdio.h>

main()
{
	int c, q, w, e;
	q = w = e = 0;

	while ((c = getchar()) !='\n'){
		if (c == '[')
			++q;
	    if (c == ']')
			--q;
		if (c == '(')
			++w;
		if (c == ')')
			--w;
		if (c == '/*')
			++e;
		if (c == '*/')
			--e;
	}
	if (q == 0 && w == 0 && e == 0)
		printf("�ùٸ� �����Դϴ�.");
	else
	    printf("����");
}
#include <stdio.h>
#define ON 1
#define OFF 0

main()
{
	int c, x, y, q, w, e, r;
	q = w = e = 0;
    x =OFF;
    y =OFF;

	while ((c = getchar()) !=EOF){
        if (c == '{')
			++q;
        if (c == '}')
			--q;
		if (c == '(')
			++w;
		if (c == ')')
			--w;
		if (c == '/')
			x =ON;
		else if (x ==ON && c == '*'){
			x =OFF;
	        ++e;
		}
		else
			;
        if (c =='*')
			y =ON;
		else if (y ==ON && c == '/'){
			y =OFF;
		    --e;
		}
		else
			;
	}
	if (q == 0 && w == 0 && e == 0)
		printf("올바른 문법입니다.");
	else
	    printf("오류");
}
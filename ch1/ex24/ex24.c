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

/* escape문자 - \t,\n,\b 등인데 짝이맞는지 검사할 필요가있나?*/
/*또 인용부호 "와 '의 경우에 시작하는따음표와 마치는 따음표가 다른문자로 지정되어있는건지 궁금 */
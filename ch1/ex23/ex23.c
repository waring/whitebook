#include <stdio.h>
#define ON 1
#define OFF 0
main()
{
	int a, b;
    int c, x, y, q;
	x =OFF;
	y =OFF;
	q =OFF;
    a =b =0;


	while ((c = getchar()) !=EOF){
        if (c =='\'')
            ++a;
        if (c =='\"')
            ++b;
        if (a%2 ==0 && b%2 ==0){
		    if (c == '/')
			    x =ON;
		    else if (x ==ON && c == '*'){
			    x =OFF;
	            q =ON;
		    }
		    else
			    ;
		
		    if (c =='*')
		    	y =ON;
		    else if (y ==ON && c == '/'){
			    y =OFF;
		        q =OFF;
		    }
		    else if (q ==OFF && c !='/')
			    putchar(c);
		    else
			    ;
        }
        else
            putchar(c);
    }
	printf ("\n");
}
/* 앞 예재 어디선가 '에 대해 물어봤는데 이제 알것같다.*/
/* abc\/*abc\'abc\'abc*\/abc 이런형태만 원하는대로 출력된다.......... 아,,,,,,
   \' 와 설명문 표시기호가 엇갈려 입력될경우 요상한 결과가....*/		
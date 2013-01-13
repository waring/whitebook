#include <stdio.h>
#define ON 1
#define OFF 0
/* 스페이스기호가 2개이상 연속되어 입력된경우에만 \t 으로 교체하려했으나 실패 */
main()
{
	int c, check;
	check =OFF;
	while ((c = getchar()) !='\n'){
		if (check ==ON && c !=' '){
            printf ("\t");
			check =OFF;
		}
        else if (c ==' '){
            printf ("  ");
            check =ON;;
        }
        else{
            putchar(c);
            check =OFF;
        }
	}
	printf ("\n");
}
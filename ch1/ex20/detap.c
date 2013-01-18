#include <stdio.h>

main()
{
	int c, i, len, other;
    len =0;

    while ((c = getchar()) !=EOF){
        if (c == '\t'){
            if ((len%8) ==0)
                printf("        ");
            else{
                for (i =(len%8)-1; i <=8; ++i)
                    printf (" ");
                len =0;
            }
        }
        else{
            putchar(c);
            ++len;
            /*여기에 if (c =='\n') / --len; 코드를 넣고 싶은데 넣으면 출력되는결과가 한칸밀림 ^ 왜? */
        }
    }
}
/* 위 오류때문에 newline이 등장하면 꼬인다.*/
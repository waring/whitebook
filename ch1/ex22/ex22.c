#include <stdio.h>
#define N 8

/* 한글번역본 : 한행의 n번째 열 앞에 나타나는 빈칸 아닌 문자 중에서 마지막 문자의 뒷부분을
                다음행으로 보내어 한 행을 두 개 이상의 행으로 만드는 프로그램을 작성하라 
           (내가 잘못이해한것 같아서 적어둠)                                              */
main()
{
    int c, word;
    
    word =0;

    while ((c =getchar()) !=EOF){
        ++word;
        if (c =='\n')
            word =0;
        if (word ==N && c !=' '){
            printf("\n");
            putchar(c);
        }
        else
            putchar(c);
    }
}
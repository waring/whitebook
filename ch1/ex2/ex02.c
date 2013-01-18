#include <stdio.h>

main()
{
	printf("hello\aworld    \\a\n");
	printf("hello\cworld    \\c\n");
	printf("hello\dworld    \\d\n");
	printf("hello\eworld    \\e\n");
    printf("hello\fworld    \\f\n");
    printf("hello\gworld    \\g\n");
    printf("hello\hworld    \\h\n");
    printf("hello\iworld    \\i\n");
    printf("hello\jworld    \\j\n");
    printf("hello\kworld    \\k\n");
    printf("hello\lworld    \\l\n");
    printf("hello\mworld    \\m\n");
    printf("hello\nworld    \\n\n");
    printf("hello\oworld    \\o\n");
    printf("hello\pworld    \\p\n");
    printf("hello\qworld    \\q\n");
    printf("hello\rworld    \\r\n");
    printf("hello\sworld    \\s\n");
    printf("hello\uworld    \\u\n");
    printf("hello\vworld    \\v\n");

}
/* \c \d 와 같이 특별히 어떠한 동작을 하라는 명령어가 아닐경우엔 \뒤의 알파벳이 그대로 출력된다는 사실 발견. */
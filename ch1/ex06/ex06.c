#include <stdio.h>

main()
{
    int c;
    printf("getchar() !=EOF의 값은 %d ", getchar() !=EOF);
    printf("\n");
}
/* getchar() !=EOF은 Ctr+Z 를 입력할경우 0, 그외다른문자를 입력시에는 1의 값을 가진다 */

#include <stdio.h>
#define ON 1
#define OFF 0
/* �����̽���ȣ�� 2���̻� ���ӵǾ� �ԷµȰ�쿡�� \t ���� ��ü�Ϸ������� ���� */
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
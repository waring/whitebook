#include <stdio.h>

int f_of_c (int fahr);

main()
{
	int fahr;
	for (fahr = 0; fahr <=300; fahr = fahr + 20)
		f_of_c(fahr);
}

int f_of_c (int fahr)
{
    printf("%3d %6.1f\n",fahr, (5.0/9.0) * (fahr - 32));
    return 0; 
}
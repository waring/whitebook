#include <stdio.h>

main()
{
	float fahr, celsius;
	int upper, step;

	upper = 50;
	step =5;

	celsius = -50;
	printf("celsius => fahr\n");
	while (celsius <= upper){
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%6.1f      %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
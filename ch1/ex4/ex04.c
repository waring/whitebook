#include <stdio.h>

main()
{
	float fahr, celsius;
	int upper, step;

	upper = 300;
	step =20;

	celsius = 0;
	printf("celsius => fahr\n");
	while (celsius <= upper){
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f    %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
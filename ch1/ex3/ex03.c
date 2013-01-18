#include <stdio.h>

main()
{
	float fahr, celsius;
	int upper, step;

	upper = 300;
	step =20;

	fahr = 0;
	printf("fahr => celsius\n");
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f    %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
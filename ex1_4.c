#include <stdio.h>

float fahr(int celsius)
{
	return (9.0 / 5.0 * celsius) + 32;
}

main() 
{
	/* print Celsius-Fahrenheit table 
		for celsius = 0, 20, ..., 300 */
	
	int celsius = 0;
	
	printf("\tC\t  F\n\t--------------\n", celsius, fahr(celsius));
	while (celsius <= 300) 
	{
		printf("\t%d\t%6.1f\n", celsius, fahr(celsius));
		celsius += 20;
	}
	
}
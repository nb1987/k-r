#include <stdio.h>

float celsius(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}

main() 
{
	/* print Fahrenheit-Celsius table 
		for fahr = 0, 20, ..., 300 */
	
	int fahr = 0;
	
	printf("\tF\t  C\n\t--------------\n", fahr, celsius(fahr));
	while (fahr <= 300) 
	{
		printf("\t%d\t%6.1f\n", fahr, celsius(fahr));
		fahr += 20;
	}
	
}
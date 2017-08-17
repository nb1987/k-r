#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius(int fahr)
{
	return (5.0 / 9.0) * (fahr - 32);
}

main() 
{
	/* print Fahrenheit-Celsius table 
		for fahr = 0, 20, ..., 300 ... in reverse order */
	
	int fahr = 0;
	
	printf("\tF\t  C\n\t--------------\n", fahr, celsius(fahr));
	
	for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) 
	{
		printf("\t%d\t%6.1f\n", fahr, celsius(fahr));
	}
	
}
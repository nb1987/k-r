#include <stdio.h>

#define MAXLINE 100 /* maximum input line size */
#define CUTOFF 80

int getline(char line[]);
void copy(char to[], char from[]);

/* print all input lines greater than 80 characters */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > CUTOFF) 
		{
			printf("%s\n", line);
		}
	}
	return 0;
}

int getline(char s[]) 
{
	int c, i;
	for (i=0; i < lim - 1; (c=getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') 
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
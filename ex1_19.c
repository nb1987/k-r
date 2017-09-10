#include <stdio.h>

#define MAXLEN 1000

int reverse(char s[]);

main() {
	int i;
	char s[MAXLEN];
	
	while ((i = reverse(s)) > 0) {
		printf("%s\n", s);
	}
}

int reverse(char s[]) {
	int c, i, j;
	
	char s_copy[MAXLEN];
	
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
		s_copy[i] = c;
	}

	for (j = i - 1; j >= 0; j--) {
		s[i - (j + 1)] = s_copy[j];
	}
	
	s[i] = '\0';
	
	return i;
}
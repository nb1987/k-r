#include <stdio.h>

#define NEWLINE '\n'
#define ASCII_LEN 128

main() {
	int c, i, j;
	
	// assuming an unsigned ASCII character set, there are 128 possible chars
	int chars[ASCII_LEN];
	for (i = 0; i < ASCII_LEN; i++) {
		chars[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		chars[c] += 1;
	}
	
	for (i = 0; i < ASCII_LEN; i++) {
		if (chars[i] > 0) {
			putchar(i);
			putchar(' ');
			for (j = 0; j < chars[i]; j++) {
				putchar('|');
			}
			putchar(NEWLINE);
		}
		
	}
	
}
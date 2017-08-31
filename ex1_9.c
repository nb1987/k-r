#include <stdio.h>

#define BLANK ' '

main() {
	
	int c, prev_c;
	prev_c = EOF;
	
	while ((c = getchar()) != EOF) {
		if (!(c == BLANK && prev_c == BLANK)) {
			putchar(c);
		}
		prev_c = c;
	}
	
}
#include <stdio.h>

#define NEWLINE '\n'
#define SPACE ' '
#define TAB '\t'

main() {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c != NEWLINE && c != SPACE && c != TAB) {
			putchar(c);
		} else {
			putchar(NEWLINE);
		}
	}
}
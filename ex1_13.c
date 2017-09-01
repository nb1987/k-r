#include <stdio.h>

#define TAB '\n'
#define SPACE ' '
#define NEWLINE '\n'
#define IN 1
#define OUT 0

main() {
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c != NEWLINE && c != SPACE && c != TAB) {
			putchar('|');
		} else {
			putchar(NEWLINE);
		}
	}
}
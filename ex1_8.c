#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

main() {

	int c, b, t, nl;
	b = 0;
	t = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == BLANK) { ++b; }
		if (c == TAB) { ++t; }
		if (c == NEWLINE) { ++nl; }
	}
	printf("Blanks: %d\n", b);
	printf("Tabs: %d\n", t);
	printf("Newlines: %d\n", nl);
}
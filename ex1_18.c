#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define MAXLINE 100
#define TRUE 1
#define FALSE 0

int getline(char line[], char line_copy[], int max);

main() {
	int c, len;
	char line[MAXLINE];
	char line_copy[MAXLINE];
	
	while ((len = getline(line, line_copy, MAXLINE)) > 0) {
		printf("Length of s_copy: %d\n", len);
		printf("%s", line_copy);
	}
}

int getline(char s[], char s_copy[], int lim) {
	int c, i, j;
	int copy_remainder = FALSE;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	
	// remove any trailing spaces and tabs and decrement i as needed
	// begin at j = i - 1 since the final character of s[] is a null terminator (NUL / \0)
	for (j = i - 1; j >= 0; j--) {
		// printf("s[j] is %i\n", s[j]);
		if (copy_remainder == FALSE && (s[j] == TAB || s[j] == SPACE)) {
			i--;
			
		} else {
			s_copy[j] = s[j];
			copy_remainder = TRUE;
		}		
	}
	
	if (c == '\n') {
		s_copy[i] = c;
		i++;
	}
	
	s_copy[i] = '\0';
	return i;
}
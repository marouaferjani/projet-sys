#include <stdio.h>
int main(void)
{
	int ch;
	/* read character by character from stdin */
	do {
		ch = fgetc(stdin);
		putchar(ch);
	} while (ch != EOF);
	return 0;
}

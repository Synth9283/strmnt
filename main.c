#include <stdio.h>
#include <string.h>

void strmnt(char *str);

int main(int argc, char **argv) {
	for (int i=1; i<argc; i++) {
		strmnt(*(argv+i));
	}

	return 0;
}

void strmnt(char *str) {
	size_t len = strlen(str);
	for (int i=0; (size_t)i<len; i++) {
		printf("%.*s\n", i, str);
	}
	for (int i=len-2; i>0; i--) {
		printf("%.*s\n", i, str);
	}
}


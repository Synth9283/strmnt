#include <stdio.h>
#include <string.h>
#include <time.h>

clock_t begin;
void strmnt(char *str);

int main(int argc, char **argv) {
	begin = clock();
	for (int i=1;i<argc;i++) {
		strmnt(*(argv+i));
	}
	printf("Took: %f seconds\n", (double)(clock()-begin)/CLOCKS_PER_SEC);
	return 0;
}

void strmnt(char *str) {
	size_t len = strlen(str);
	for (int i=0;(size_t)i<len;i++) {
		printf("%.*s\n", i, str);
	}
	for (int i=len-2;i>0;i--) {
		printf("%.*s\n", i, str);
	}
}

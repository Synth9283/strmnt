#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char *buffer;
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
	buffer = (char*)malloc(len);
	for (int i=0;(size_t)i<len;i++) {
		for (int j=0;j<i+1;j++) {
			*(buffer+j) = *(str+j);
		}
		printf("%s\n", buffer);
	}
	for (int i=len-1;i>0;i--) {
		*(buffer+i) = '\0';
		printf("%s\n", buffer);
	}
	free(buffer);
}

#include <stdio.h>
#include <string.h>
#include <time.h>

int amount;
clock_t begin;
void strmnt(char *str);

int main(int argc, char **argv) {
	begin = clock();
	for (int i=1;i<argc;i++) {
		amount = strlen(*(argv+i))-1;
		strmnt(*(argv+i));
	}
	printf("Took: %f seconds\n", (double)(clock()-begin)/CLOCKS_PER_SEC);
	return 0;
}

void strmnt(char *str) {
	size_t len = strlen(str);
	for (int i=0;(size_t)i<len;i++) {
		for (int j=0;j<i+1;j++) {
			printf("%c", *(str+j));
		}
		printf("\n");
	}
	for (int i=len;i>0;i--) {
		for (int j=0;j<amount+1;j++) {
			if (j==amount) break;
			else printf("%c", *(str+j));
		}
		printf("\n");
		amount--;
	}
}

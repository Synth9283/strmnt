#include <stdio.h>
#include <string.h>
#include <time.h>

int amount, amount_len;
clock_t begin;
void strmnt(char *str);

int main(int argc, char **argv) {
	begin = clock();
	for (int i=1;i<argc;i++) {
		amount_len = strlen(*(argv+i))-1;
		amount = amount_len;
		strmnt(*(argv+i));
	}
	printf("Took: %f seconds\n", (double)(clock()-begin)/CLOCKS_PER_SEC);
	return 0;
}

void strmnt(char *str) {
	for (int i=0;(size_t)i<amount_len;i++) {
		for (int j=0;j<i+1;j++) {
			printf("%c", *(str+j));
		}
		printf("\n");
	}
	for (int i=amount_len;i>0;i--) {
		for (int j=0;j<amount+1;j++) {
			if (j==amount) break;
			else printf("%c", *(str+j));
		}
		printf("\n");
		amount--;
	}
}

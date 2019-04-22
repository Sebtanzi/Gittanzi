#include <stdio.h>

int main(int argc, char *argv[]) {
	if(argc==2) {
		printf("Knok knok, %s\n", argv[1]);
	} else {
		fprintf(stderr, "Usage: %s <name>\n",argv[0]);
	}
	return 0;
}




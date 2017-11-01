#include <string.h>

void reversePrint(char string[]) {
	for(int i = strlen(string); i >= 0; i--) {
		printf("%c",string[i]);
		if(i == 0) {
			printf("\n");
		}
	}
}
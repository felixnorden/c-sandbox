#include <stdio.h>
#include <string.h>

void byteToBits(unsigned char byte) {
	for(int i = 7; i >= 0; i--) {
		unsigned char bit = (byte >> i) & 1;
		printf("%i", bit);
	}
	printf("\n");
}

void shortToBits(unsigned short hWord) {
	for(int i = 15; i >= 0; i--) {
		unsigned char bit = (hWord >> i) & 1;
		printf("%i", bit);
	}
	printf("\n");
}

void intToBits(unsigned int word) {
	for(int i = 31; i >= 0; i--) {
		unsigned char bit = (word >> i) & 1;
		printf("%i", bit);
	}
	printf("\n");
}


char bitsToByte(char bits[]) {
	unsigned char byte = 0;
	for (int i = 0; i < 8; i++) {
		byte = (byte << 1) | (bits[i] - 48);
	} 
	printf("%i\n", byte);
	return byte;
}
#include <stdio.h>
#include "bitops.h"


int main(int argc, char **argv)
{
	
	printf("%x\n", 97);
	
	printf("%i\n", 0x97);
	
	unsigned char c = bitsToByte("10010010");
	
	printf("%x", c);
	
	return 0;
	
}

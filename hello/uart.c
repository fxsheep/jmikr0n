#include <stdint.h>
#include <mcs51/8051.h>

//Seems that bits TI and RI doesn't work

void putchar(uint8_t c) {
	while((SCON >> 1 & 1) == 0);
	SCON &= 0xfd;
	SBUF = c;
}

int getchar(void) {
	while((SCON & 1) == 0);
	SCON &= 0xfe;
    return SBUF;
}


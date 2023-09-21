#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <mcs51/8051.h>

#define	MSB(word)      (BYTE)(((WORD)(word) >> 8) & 0xff)
#define LSB(word)      (BYTE)((WORD)(word) & 0xff)

#define XVAL(addr)     (*( __xdata volatile unsigned char  *)(addr))
#define IVAL(addr)     (*( __idata volatile unsigned char  *)(addr))

void main(void) {
	printf("\r\nHello world!\r\n");

	while(1) {
		putchar(getchar());
	}
}


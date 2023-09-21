	.globl __sdcc_gsinit_startup

	.area HEADER	(ABS,CODE)
	.org	0x8000
	.db 0x55, 0xAA, 0xAA, 0x55
	.db '3', '3', '9', '2'

	.area FWINIT	(ABS,CODE)
	.org	0x8500
        ljmp    __sdcc_gsinit_startup


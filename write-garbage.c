/*
 * Write, um, stuff to the video memory on a Spectrum 48K.
 *
 * Copyright 2007 - Aaron Brady <bradya@gmail.com>
 */
void main(void) {
	int i, ii;
	while(1) {
	for(ii = 0; ii < 256; ii++) {
		for(i = 0; i < (32*192); i++) {
			*(char *)(0x4000 + i) = ii;
		}
	}
	}
}

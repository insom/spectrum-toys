/*
 * Poke a raw file into a fixed offset inside an xspect SNA file.
 *
 * Copyright 2007 - Aaron Brady <bradya@gmail.com>
 */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF 32768

int main(int argc, char **argv) {
	int o,i,r;
	char d[BUF];
	if(argc < 3) {
		fprintf(stderr, "%s <raw-file> <sna-file>\n", argv[0]);
		exit(-1);
	}
	i = open(argv[1], O_RDWR);
	o = open(argv[2], O_RDWR);
	lseek(o, 27+0x4000, SEEK_SET);
	r = read(i, &d, BUF);
	write(o, &d, r);
	close(o);
}

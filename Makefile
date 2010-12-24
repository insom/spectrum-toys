all:
	gcc raw-into-sna.c -o raw-into-sna
	sdcc -mz80 --code-loc 32768 --no-std-crt0 write-garbage.c
	cp template.sna write-garbage.sna
	python ihx-to-raw.py write-garbage.ihx write-garbage.raw
	./raw-into-sna write-garbage.ihx write-garbage.sna || true

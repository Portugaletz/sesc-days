run:prog
	./prog
prog:prog.c
	gcc prog.c -o prog

build:prog

trout: trout.h util.h trout.c
	gcc -g -o trout.c

util: util.h util.c
			gcc -c util.c

main.o: trout.h util.h main.c
			gcc -c main.c

main: main.o trout.o util.o
		gcc -g Wall -o main main.o trout.o util.o

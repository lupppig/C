justify: justify.o word.o line.o
	gcc -o juctify juctify.o word.o line.o

justify.o: juctify.c word.h line.h
	gcc -c juctify.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
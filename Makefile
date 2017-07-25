number : type.o number.o
	gcc -o number type.o number.o
type.o : type.h
number.o : number.c
clean :
	rm number number.o type.o

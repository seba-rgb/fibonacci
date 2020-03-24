f: main.o fibonacci.o
	clang main.o fibonacci.o -o f

main.o: main.c
	clang main.c -Wall -c -o main.o

fibonacci.o: fibonacci.c
	clang fibonacci.c -c -o fibonacci.o

borrar: 
	rm f
	rm *.o


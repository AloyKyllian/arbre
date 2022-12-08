test1 : arbre.c arbre.h element.c element.h main.c
	gcc -c element.c
	gcc -c arbre.c
	gcc -c main.c
	gcc -o arbre.out element.o arbre.o main.o  
	rm -rf *.o
	./arbre.out

	
clean :
	rm -rf *.o

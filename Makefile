compiler:arbre.o
	gcc -Wall arbre.o -o arbre
arbre.o:arbre.c arbre.h
	gcc -Wall arbre.c -c
clean:
	rm -rf *.o *~
	

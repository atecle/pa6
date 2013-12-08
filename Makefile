malloc: library
	gcc -g main.c -L. -l malloc -o malloc
	
library: mymalloc.o
	ar rcs libmalloc.a mymalloc.o
	
mymalloc.o:
	gcc -c mymalloc.c -o mymalloc.o

clean: 
	rm *.a
	rm *.o
	rm malloc

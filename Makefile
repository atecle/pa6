malloc: library
	gcc main.c -L. -l malloc -o malloc
	
library: malloc.o
	ar rcs libmalloc.a malloc.o
	
malloc.o:
	gcc -c malloc.c -o malloc.o

clean: 
	rm *.a
	rm *.o
	rm malloc
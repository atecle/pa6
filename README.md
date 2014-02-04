CS 214: Systems Programming - Error detecting malloc() and free()
===

*See malloc_enh.pdf for assignment description*

mymalloc.c is code, provided in class, that I adjusted to detect errors. 

**DETECTABLE ERRORS**
* freeing unallocated variable
* freeing an already freed variable


Implementation fails in the following case

int *x = malloc(sizeof(int));
free(x);
char *t = malloc(4); 
free(x);

Our program successfully frees x a second time when it should prompt an error. This is because, during malloc, x is set to some address space. If the next call to malloc asks for space less than or equal to the size of x, then we are writing to the same addresses space x was previously in.

//
//  main.c
//
//
//  Created by Adam on 12/5/13.
//
//

#include "mymalloc.h"
#define malloc(x) my_malloc(x)
#define free(ptr) my_free(ptr)

int main(int argc, char **argv) {
    
    printf("sdfsdf\n");
    struct MemEntry *test;
    test->size = 5;
    struct MemEntry *test1;
    test1->size = 100;
    printf("Size 1: %d \t Size 2: %d \n", sizeof(test), sizeof(test1));
    
    
    printf("mallocing and freeing string\n");
    char *str = malloc(sizeof(char) *strlen(argv[1]));
    strcpy(str, argv[1]);
    free(str);
    printf("\n");
    
    
    return 1;
}

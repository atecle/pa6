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
    

    
    printf("mallocing and freeing int\n");
    
    int *x = malloc(sizeof(int) * 30);
    int y = 50;
    x = &y;
    free(&x);
    
    printf("mallocing and freeing string\n");
    char *str = malloc(sizeof(char) *strlen(argv[1]));
    strcpy(str, argv[1]);
    free(str);
    printf("\n");
    
    
    return 1;
}

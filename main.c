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
    
    
    int *x = malloc(sizeof(int));

    int *y=malloc(sizeof(int));
    
    free(x);
    free(y);

    int *s;
    free(s);

    int *t = malloc(sizeof(int));
    free(t);

    free(y);
    free(x);

    return 1;
}

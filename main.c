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
    
  
    int *x;
    //x = malloc(sizeof(int));
    free(x);

    int *y;
    //y = malloc(4);
    //free(y);
    
    return 1;
}

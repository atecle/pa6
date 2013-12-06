//
//  main.c
//  
//
//  Created by Adam on 12/5/13.
//
//

#include "malloc.h"
#define malloc(x) my_malloc(x)
#define free(x) my_free(x)

int main(int argc, char **argv) {
    
    int x;
    malloc(x);
    free(x);
    
    return 1;
}

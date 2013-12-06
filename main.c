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
    
    
    int x = (int)malloc(sizeof(int));
    x = 0;
    printf("%d\n", x);
    char *str = (char*)malloc(sizeof(char) * 100);
    str = argv[1];
    
    printf("%s\n", str);
    free(str);
    //printf("tesT\n");
   // free(x);
    
    return 1;
}

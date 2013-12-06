//
//  malloc.h
//  
//
//  Created by Adam on 12/5/13.
//
//

#ifndef _mymalloc_h
#define _mymalloc_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>

typedef struct MemEntry MemEntry;

struct MemEntry {
    
    
};

void *my_malloc(unsigned int size);
void *my_free(unsigned int size);


#endif

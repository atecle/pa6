//
//  malloc.h
//  
//
//  Created by Adam on 12/5/13.
//
//
//
//

#ifndef _mymalloc_h
#define _mymalloc_h

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	<errno.h>
#include 	<signal.h>

typedef struct MemEntry MemEntry;

struct MemEntry {
    
    struct MemEntry *prev;
    struct MemEntry *succ;
    unsigned int size;
    int isfree;
};

void *my_malloc(unsigned int size);
void my_free(void *ptr);
void remove_from_arr(MemEntry *p);

#endif

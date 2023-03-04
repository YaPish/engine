#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#define PTR_EXIST( ptr ) \
    if ( ptr == NULL )   \
        exit( -1 )

typedef struct {
    void * data;
    size_t size;
} Array;

#endif

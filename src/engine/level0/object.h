#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <stddef.h>
#include <stdlib.h>

#include "component.h"


typedef struct {
    ComponentFlag flag;
    void **       components;

    void ( * onStart )  ( void );
    void ( * onUpdate ) ( void );
} Object;

/*
 * allocation components
 */
void ObjectInit( 
    Object * this
);

/*
 * removing whole object
 */
void ObjectRemove(
    Object * this
);

/*
 * if Object has already contains including component, nothing happens, 
 * new component will not include to the object
 */
void ObjectAddComponents( 
    Object *      this,
    ComponentFlag components
);

/*
 * if Object does contain removing component, nothing happens
 */
void ObjectRemoveComponents( 
    Object *      this,
    ComponentFlag components
);

void * ObjectGetComponent(
    Object *  this,
    Component component
);

#endif

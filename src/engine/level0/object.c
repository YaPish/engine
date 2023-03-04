#include <math.h>

#include "definitions.h"
#include "object.h"
#include "component.h"

#include "components/transform.h"
#include "components/collider.h"


void ObjectInit( Object * this ) {
    this = ( Object * )malloc( sizeof( Object ) );
    PTR_EXIST( this );

    this->flag       = 0;
    this->components = malloc( sizeof( void * ) * CF_COUNT );
}

void ObjectRemove( Object * this ) {
    PTR_EXIST( this );

    free( this->components );
    free( this );
}

void ObjectAddComponents( Object * this, ComponentFlag components ) {
    PTR_EXIST( this );
    
    size_t i = 0;
    for ( bin_t mask = 1; mask < pow( 2, CF_COUNT ); mask *= 2 ) {
        i++;
        if ( !HAS_COMPONENT( components, mask ) ) continue;

        this->components[ i ] = ( void * )malloc( SIZEOF_COMPONENT( mask ) ); 
    }
    this->flag |= components;
}

void ObjectRemoveComponents( Object * this, ComponentFlag components ) {
    PTR_EXIST( this ); 

    size_t i = 0;
    for ( bin_t mask = 1; mask < pow( 2, CF_COUNT ); mask *= 2 ) {
        i++;
        if ( !HAS_COMPONENT( components, mask ) ) continue;
        free( this->components[ i ] );
        this->flag &= ~components;
    }
}

void * ObjectGetComponent( Object * this, Component component ) {
   PTR_EXIST( this ); 
   if ( !HAS_COMPONENT( this->flag, component ) ) 
       return NULL;
   return this->components[ GET_COMPONENT_ID( component ) ];
}

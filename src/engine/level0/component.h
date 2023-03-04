#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <math.h>
#include <stdint.h>
#include <stddef.h>

#include "vector2.h"
#include "angle.h"

#include "components/transform.h"
#include "components/collider.h"


#define CF_TRANSFORM     1  // 0
#define CF_COLLIDER_2D   2  // 1

#define CF_RENDER        4  // 2
#define CF_SPRITE        8  // 3


#define CF_COUNT         4

#define bin_t            uint16_t
#define id_t             uint32_t

typedef bin_t ComponentFlag;
typedef enum {
    COMPONENT_TRANSFORM   = CF_TRANSFORM,
    COMPONENT_COLLIDER_2D = CF_COLLIDER_2D,

    COMPONENT_RENDER      = CF_RENDER,
    COMPONENT_SPRITE      = CF_SPRITE
} Component;

#define HAS_COMPONENT( _FLAG, _COMPONENT ) \
    ( _FLAG & _COMPONENT )  
#define GET_COMPONENT_ID( _COMPONENT )    \
    ( ( bin_t )( log( _COMPONENT ) / log( 2 ) ) )

#define SIZEOF_COMPONENT( _MASK )                          \
    ( ( _MASK == CF_TRANSFORM   ) ? sizeof( Transform )  : \
    ( ( _MASK == CF_COLLIDER_2D ) ? sizeof( Collider2D ) : \
        -1                                                 \
    ) )
 

#endif

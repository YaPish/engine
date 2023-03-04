#include "level0.h"
#include "level1.h"
#include "level2.h"

#include "mainLoop.h"

void start() {
    for ( size_t i = 0; i < objectCollection.size; i++ ) {
        objectCollection[ i ]->onStart();
    }
}

void update() {
    for ( size_t i = 0; i < objectCollection.size; i++ ) {
        objectCollection[ i ]->onUpdate();
    }
}

void render() {
    for ( size_t i = 0; i < objectCollection.size; i++ ) {
        bin_t flag = objectCollection[ i ]->flag;
        if ( !HAS_COMPONENT( flag, COMPONENT_RENDER ) ) 
            continue;
        objectCollection[ i ]->components[ GET_COMPONENT_ID( COMPONENT_RENDER ) ]->onRender();
    }
}

void end() {
    TreeDelete( objectCollection );
}


int main( int args, char ** argv ) {
    static bin_t gameFlag = 0;

    start();
    while ( !EO_GAME( gameFlag ) ) {
        update();
        render();
    }
    end();
  
    return 0;
}

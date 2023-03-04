CMAKE_MINIMUM_REQUIRED( VERSION 3.24.2 )
project( rk1 VERSION 0.1 )

add_library( engine SHARED
    src/engine/level0/vector2.c
    src/engine/level0/angle.c
    src/engine/level0/component.c
    src/engine/level0/object.c

    src/engine/level0/components/transform.c
    src/engine/level0/components/collider.c
)

set_target_properties( engine PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
)

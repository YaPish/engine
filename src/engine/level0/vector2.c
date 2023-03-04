#include "vector2.h"

/*
 * Vector2 mathematical functions
 */
Vector2 sumVector2( Vector2 a, Vector2 b ) {
    return ( Vector2 ){ a.x + b.x, a.y + b.y };
}

Vector2 subVector2( Vector2 a, Vector2 b ) {
    return ( Vector2 ){ a.x - b.x, a.y - b.y };
}

Vector2 mulVector2( Vector2 a, Vector2 b ) {
    return ( Vector2 ){ a.x * b.x, a.y * b.y };
}

Vector2 divVector2( Vector2 a, Vector2 b ) {
    return ( Vector2 ){ a.x / b.x, a.y / b.y };
}

/*
 * Vector2int mathematical functions
 */
Vector2Int sumVector2Int( Vector2Int a, Vector2Int b ) {
    return ( Vector2Int ){ a.x + b.x, a.y + b.y };
}

Vector2Int subVector2Int( Vector2Int a, Vector2Int b ) {
    return ( Vector2Int ){ a.x - b.x, a.y - b.y };
}

Vector2Int mulVector2Int( Vector2Int a, Vector2Int b ) {
    return ( Vector2Int ){ a.x * b.x, a.y * b.y };
}

Vector2Int divVector2Int( Vector2Int a, Vector2Int b ) {
    return ( Vector2Int ){ ( long )( a.x / b.x ), ( long )( a.y / b.y ) };
}

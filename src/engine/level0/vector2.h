#ifndef _VECTOR2_H_
#define _VECTOR2_H_

typedef struct {
    long x, y;
} Vector2Int;

typedef struct {
    double x, y;
} Vector2;


Vector2    sumVector2( Vector2 a, Vector2 b );
Vector2    subVector2( Vector2 a, Vector2 b );
Vector2    mulVector2( Vector2 a, Vector2 b );
Vector2    divVector2( Vector2 a, Vector2 b );

Vector2Int sumVector2Int( Vector2Int a, Vector2Int b );
Vector2Int subVector2Int( Vector2Int a, Vector2Int b );
Vector2Int mulVector2Int( Vector2Int a, Vector2Int b );
Vector2Int divVector2Int( Vector2Int a, Vector2Int b );

#endif
